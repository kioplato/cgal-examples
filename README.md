# CGAL Examples

In this repository I develop and maintain minimal working examples
for testing CGAL's 5.6 features and understanding its behaviour.

I also maintain minimal working examples for other programming stuff:
* [examples](https://github.com/kioplato/examples)

## Project structure

```
├── include/    Required libraries
│  └── cgal/    GAL library
├── obj/        Object files after compilation
├── bin/        Compiled MWE from examples/ directory
├── examples/   MWE for CGAL
└── README.md   This file
```

## Compiling examples

__NOTE__: These examples were implemented and tested in Linux.

For compiling the CGAL's minimal working examples a `Makefile` is provided.

Run `make help` to get a brief description about the available targets.
If you are lazy and can't be bothered, just run `make` and it will
compile all minimal working examples with maximum optimization.
Compiled minimal working examples will be stored in `bin/`.
