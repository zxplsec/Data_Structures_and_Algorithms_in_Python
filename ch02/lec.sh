#!/bin/bash

xelatex lec.tex
rm -f *.nav *.snm *.toc *.vrb *.aux *.log *.out
#mupdf *.pdf &
cp lec.pdf ../lec2.pdf
