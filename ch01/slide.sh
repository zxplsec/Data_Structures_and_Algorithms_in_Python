#!/bin/bash

xelatex slide.tex
rm -f slide.nav slide.snm slide.toc slide.vrb slide.aux slide.log slide.out
# mupdf slide.pdf &
cp slide.pdf ../slide1.pdf
