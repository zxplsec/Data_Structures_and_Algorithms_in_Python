#!/bin/bash

pdflatex lec1.tex
rm -f lec1.nav lec1.snm lec1.toc lec1.vrb lec1.aux lec1.log lec1.out

cd ..
git add -A .
git commit -m "Update"
git push origin master
cd lec1

mupdf lec1.pdf &

#mkdir -p /tmp/workspace
#cp -r * /tmp/workspace/
#git add -A .
#git commit -m "Update"
#git checkout -B gh-pages
#cp -r /tmp/workspace/* .
#git add -A .
#git commit -m "new version"
#git push origin master gh-pages
#git checkout master
#rm -rf /tmp/workspace
