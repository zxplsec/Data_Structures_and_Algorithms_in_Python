#!/bin/bash

xelatex slide1.tex
rm -f slide1.nav slide1.snm slide1.toc slide1.vrb slide1.aux slide1.log slide1.out

cd ..
git add -A .
git commit -m "Update"
git push origin master
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
