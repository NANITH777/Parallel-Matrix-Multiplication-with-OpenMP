# Parallel Matrix Multiplication with OpenMP

## Description

This program implements matrix multiplication using both parallel (OpenMP) and serial approaches. It reads matrices from text files, performs multiplication, and compares the execution time between parallel and serial implementations. The program is optimized for performance with compiler flags and pthread support.

## Features

- Parallel matrix multiplication using OpenMP
- Serial matrix multiplication for performance comparison
- Dynamic memory management for large matrices
- Optimized compilation with -O3 flag
- Performance timing comparison
- File I/O for matrix input and output

## Requirements

- GCC Compiler
- OpenMP library
- POSIX Threads (pthread) library
- Make utility
- MinGw

## Installation

Clone the repository:

Build the project:

```bash
mingw32-make
```

## Usage

1. Prepare your input files:

   - `matrix_a.txt`: First matrix
   - `matrix_b.txt`: Second matrix

   File format:

   ```
   rows columns
   matrix elements (space-separated)
   ```

2. Run the program:

```bash
./matrix_multiplication matrix_a.txt matrix_b.txt sonuclar.txt
```

## Input File Format

The input files should follow this format:

- First line: number of rows and columns (space-separated)
- Following lines: matrix elements (space-separated)
- Each row on a new line

The program will:

1. Display both input matrices
2. Show the resulting multiplication matrix
3. Compare execution times between serial and parallel implementations
4. Save the result in `sonuclar.txt`

## Optimization

The program is compiled with the following optimization flags:

- `-fopenmp`: Enables OpenMP support
- `-Wall`: Enables all compiler warnings
- `-O3`: Maximum optimization level
- `-lpthread`: Links against pthread library

## Author

[[Nanith](https://github.com/NANITH777)]
