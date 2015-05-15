To compile the add code, use the following command:

``em++ add.cpp -s EXPORTED_FUNCTIONS="['_add']" -o add.js``

To compile the dmath code use the following command:
   em++ dmath.cc -o dmath.js

To compile the dmath_embind code use the following command:
   emcc --bind -o dmath_embind.js dmath_embind.cc