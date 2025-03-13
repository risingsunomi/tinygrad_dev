# Compiling

## LLVMIR

### Cat
*using gcc*

Make sure you have OpenMP development package installed

```console
gcc -fopenmp -O3 -shared -fPIC llvm_cat.c -o libllvm_cat.so
```