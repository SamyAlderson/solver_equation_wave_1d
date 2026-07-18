# solver_equation_wave_1d

> Solves the one-dimensional wave equation using a C-based implementation.

## Overview

The solver_equation_wave_1d project is a C-based implementation of a numerical solver for the one-dimensional wave equation. The equation is a fundamental model in physics that describes the propagation of waves in a medium. This project provides a high-quality, production-ready solution for solving this equation, allowing users to simulate wave propagation in various scenarios. The solver uses a finite difference method and is designed to be efficient, stable, and easy to use.

## Features

* **Wave Equation Solver**: Solves the one-dimensional wave equation using a finite difference method.
* **High-Performance**: Optimized for speed and efficiency, making it suitable for large-scale simulations.
* **Stable and Robust**: Uses a stable numerical method to ensure accurate results and prevent numerical instability.
* **Easy to Use**: Simple and intuitive API for users to solve the wave equation.
* **Flexible Input Options**: Supports various input formats for the wave equation parameters.
* **Comprehensive Testing**: Includes thorough unit tests and example usage to ensure correctness and reliability.
* **MIT Licensed**: Free to use, modify, and distribute.

## Getting Started

### Prerequisites

* C compiler (e.g., GCC 9.2 or later)
* Make utility (e.g., GNU Make 4.3 or later)

### Installation

```bash
# Clone the repository
git clone https://github.com/tony-mk/solver_equation_wave_1d.git

# Change into the project directory
cd solver_equation_wave_1d

# Compile the project
make
```

### Usage

```bash
# Run the solver with default parameters
./solver_equation_wave_1d

# Run the solver with custom parameters
./solver_equation_wave_1d -c 100 -t 10 -a 1
```

## Architecture

The project consists of the following key files and directories:

* `src/wave_equation.c`: Implements the wave equation solver.
* `src/utils.c`: Provides utility functions for numerical computations.
* `src/test_wave_equation.c`: Contains unit tests for the wave equation solver.
* `src/main.c`: Acts as the entry point for the solver.
* `include/wave_equation.h`: Declares the public API for the wave equation solver.
* `include/utils.h`: Declares the public API for the utility functions.

## Testing

```bash
# Run the unit tests
make test
```

## Contributing

1. Fork the repository.
2. Create a feature branch.
3. Commit changes.
4. Push and open a pull request.

## License

solver_equation_wave_1d is released under the MIT License.