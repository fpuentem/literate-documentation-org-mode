# -- mode: org; --

#+NAME: init
#+BEGIN_SRC shell :exports none
rm -rf .git
#+END_SRC

#+NAME: hello
#+BEGIN_SRC python :exports none
print('Welcome to SeaGL 2025!', end='')
#+END_SRC

#+NAME: short_hash
#+BEGIN_SRC python :var line="somehash" :exports none
print(line[:4], end='')
#+END_SRC
