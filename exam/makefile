filename=examA

pdf: 
	pdflatex ${filename}
	pdflatex ${filename}

# ps: dvi
# 	dvips ${filename}.dvi

# dvi:
# 	latex ${filename}
# 	bibtex ${filename}||true
# 	latex ${filename}
# 	latex ${filename}

r:
	mupdf ${filename}.pdf &
clean:
	rm -f *.ps *.pdf *.log *.aux *.out *.dvi *.bbl *.blg *.synctex.gz
