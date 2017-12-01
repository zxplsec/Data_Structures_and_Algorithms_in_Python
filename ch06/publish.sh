#!/bin/bash

jupyter-nbconvert --to slides slide.ipynb --reveal-prefix=reveal.js
mv slide.slides.html  slide.html
