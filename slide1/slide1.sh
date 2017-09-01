#!/bin/bash

xelatex slide1.tex
rm -f slide1.ps  slide1.log slide1.aux slide1.out slide1.dvi slide1.bbl slide1.blg

cd ..
git add -A .
git commit -m "Update"
cd slide1

mupdf slide1.pdf &

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
