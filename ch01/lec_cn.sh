#!/bin/bash

xelatex lec_cn.tex
rm -f *.nav *.snm *.toc *.vrb *.aux *.log *.out
#mupdf *.pdf &
