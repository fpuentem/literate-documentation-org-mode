# -- mode: org; --

#+NAME: init
#+BEGIN_SRC shell :exports none :noweb-ref init
  rm -rf .git
#+END_SRC

#+NAME: hello
#+BEGIN_SRC python :exports none :noweb-ref hello
  print('Welcome to SeaGL 2025!', end='')
#+END_SRC

#+NAME: short_hash
#+BEGIN_SRC python :var line="somehash" :noweb-ref short_hash :exports none
  print(line[:4], end='')
#+END_SRC

#+NAME: hash_to_dir
#+BEGIN_SRC  python :var line="somehash\n\n" :noweb-ref hash_to_dir :exports none
  print(f".git/objects/{line[:2]}/{line[2:]}".rstrip(), end='')
#+END_SRC

#+NAME:strlen
#+BEGIN_SRC python :var line="18 characters long" :exports none
  print(len(line), end='')
#+END_SRC
