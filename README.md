# solver_equation_wave_1d
 Numerical solver for the 1D wave equation

## What it does
This C program solves the 1D wave equation numerically using finite differences. It's a simple implementation to help understand the basics of wave propagation. The solver takes an input file with the wave equation parameters and outputs the solution at each time step.

## Install
 Clone the repository and compile the code:
```bash
git clone https://github.com/SamyAlderson/solver_equation_wave_1d.git
cd solver_equation_wave_1d
gcc -o solver solver.c
```

## Usage
 Run the solver with an input file (e.g., `input.txt`):
```bash
./solver input.txt
```
 The output will be the solution at each time step, printed to the console.

## Build from source
 Clone the repository and compile the code as described above.

## Run tests
 The project includes a test suite in `test.c`. Run the tests with:
```bash
gcc -o test test.c
./test
```
## Project structure
* `solver.c`: numerical solver implementation
* `input.txt`: example input file
* `test.c`: test suite
* `Makefile`: build script
* `README.md`: this file

## License
 Copyright (c) 2026 SamyAlderson
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.