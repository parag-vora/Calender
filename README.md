# Calendar Project
This project implements a simple calendar in C with unit tests in C++.  
It demonstrates modular C design, use of headers, and testing with GoogleTest (or custom tests).

## Project Structure
<pre>
calender/
  ├── inc/
  │ └── calender.h # Function declarations (header file)
  ├── src/
  │ └── calender.c # Function definitions (calendar logic)
  ├── main.c # Main program entry point
  ├── makefile # Build script for main project
  └── test/
    ├── mytest.cpp # Unit test runner (main test file)
    ├── test.cpp # Unit test implementations
    ├── test.hpp # Test header declarations
    └── makefile # Build script for test project </pre>

## Features
  - Leap year calculation
  - Day-of-week calculation for first day of the year
  - Month printing with proper formatting
  - Unit tests with GoogleTest

## Requirements
  - C compiler (gcc or clang)
  - C++ compiler (g++)
  - Make

## Notes
 - Keep C code (src/, inc/, main.c) separate from C++ test code (test/).
 - Use the provided makefiles to simplify build steps.
















