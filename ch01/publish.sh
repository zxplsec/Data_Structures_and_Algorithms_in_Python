#!/bin/bash

jupyter-nbconvert --to slides basic.ipynb --reveal-prefix=reveal.js
mv basic.slides.html  basic.html


jupyter-nbconvert --to slides function.ipynb --reveal-prefix=reveal.js
mv function.slides.html  function.html

jupyter-nbconvert --to slides advance.ipynb --reveal-prefix=reveal.js
mv advance.slides.html  advance.html

jupyter-nbconvert --to slides oop.ipynb --reveal-prefix=reveal.js
mv oop.slides.html  oop.html
