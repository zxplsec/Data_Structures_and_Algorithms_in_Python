#!/bin/bash

jupyter-nbconvert --to slides basic.ipynb --reveal-prefix=reveal.js
mv basic.slides.html  index.html
# mkdir -p /tmp/workspace
# cp -r * /tmp/workspace/
# git add -A .
# git commit -m "Update"
# git checkout -B gh-pages
# cp -r /tmp/workspace/* .
# git add -A .
# git commit -m "new version"
# git push origin master gh-pages
# git checkout master
# rm -rf /tmp/workspace
