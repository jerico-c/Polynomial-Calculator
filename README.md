# README.md

## Title
Finding Roots of Polynomial Equations Using Newton Raphson and Secant Methods in C++ Programming

## Description
This report discusses the search for roots of polynomial equations using two numerical methods, namely the Newton-Raphson Method and the Secant Method. Both methods are implemented in the C++ programming language and are used to solve root-finding problems in various scientific and engineering applications.

## Table of Contents
1. [Introduction](#introduction)
2. [Theoretical Background](#theoretical-background)
   - [Newton Raphson Method](#newton-raphson-method)
   - [Secant Method](#secant-method)
3. [Implementation in Code](#implementation-in-code)
4. [Discussion](#discussion)
   - [Newton Raphson Method](#newton-raphson-method-1)
   - [Secant Method](#secant-method-1)
5. [Conclusion](#conclusion)

## Introduction
The roots of polynomial equations are the values that make the equation equal to zero. Determining the roots of polynomials is important in various mathematical problems and has wide applications in science and engineering.

## Theoretical Background

### Newton Raphson Method
- An iterative technique that utilizes the derivative of a function to find roots.
- Steps:
  1. Choose an initial point \( x_0 \).
  2. Iterate using the formula:
     $$
     x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}
     $$
  3. Repeat until convergence.

### Secant Method
- An alternative that does not require derivative calculations.
- Steps:
  1. Choose two initial points \( x_0 \) and \( x_1 \).
  2. Iterate using the formula:
     $$
     x_{n+1} = x_1 - \frac{(x_1 - x_0) f(x_1)}{f(x_1) - f(x_0)}
     $$
  3. Repeat until convergence.

## Implementation in Code
C++ is used to efficiently implement these algorithms. The program code includes:
- Header for the Newton Raphson Method
- Header for the Secant Method
- Main program that manages method selection

## Discussion

### Newton Raphson Method
- Uses the function and its derivative to quickly estimate roots.
- Suitable if the initial point is close to the root.

### Secant Method
- Uses two initial guesses to approach the root without requiring derivatives.
- Convergence is slower compared to Newton-Raphson.

## Conclusion
Both numerical methods can be relied upon to find roots of non-linear functions. The implementation in C++ demonstrates how both methods can be used in various scientific and engineering applications, depending on specific needs and the nature of the function being addressed.

## How to Run the Program
1. Ensure you have a C++ compiler installed.
2. Download or clone this repository.
3. Open a terminal and navigate to the project directory.
4. Run the following command to compile the program:
   ```bash
   g++ main.cpp -o program
   ```
5. Run the program:
   ```bash
   ./program
   ```

## License
This project does not have a specific license. Please use it as needed.

---

Feel free to adjust any specific sections or add additional information as needed.
