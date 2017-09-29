#!/bin/bash

xelatex lec.tex
rm -f lec.nav lec.snm lec.toc lec.vrb lec.aux lec.log lec.out
#mupdf lec.pdf &
cp lec.pdf ../lec1.pdf
