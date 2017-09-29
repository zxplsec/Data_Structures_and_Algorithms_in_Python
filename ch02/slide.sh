#!/bin/bash

xelatex slide.tex
rm -f *.nav *.snm *.toc *.vrb *.aux *.log *.out
# mupdf *.pdf &
cp slide.pdf ../slide2.pdf
