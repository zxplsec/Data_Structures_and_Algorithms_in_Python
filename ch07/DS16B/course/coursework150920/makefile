filename=main
title=Macro/title.tex
usepackage=Macro/usepackage.tex
newcommand=Macro/newcommand.tex
definecolor=Macro/definecolor.tex

pdf: 
	pdflatex ${filename}

# ps: dvi
# 	dvips ${filename}.dvi

# dvi:
# 	latex ${filename}
# 	bibtex ${filename}||true
# 	latex ${filename}
# 	latex ${filename}

r:
	mupdf-x11 ${filename}.pdf &

m:
	emacs ${filename}.tex &

t:
	emacs ${title} &

d:
	emacs ${definecolor} &

u:
	emacs ${usepackage} &

n:
	emacs ${newcommand} &

clean:
	rm -f ${filename}.ps ${filename}.pdf ${filename}.log ${filename}.aux ${filename}.out ${filename}.dvi ${filename}.bbl ${filename}.blg
