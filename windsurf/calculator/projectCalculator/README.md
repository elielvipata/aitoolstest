# Calculator Project

A modular C++ calculator with tokenization and parsing capabilities.

## Project Structure

```
projectCalculator/
├── CMakeLists.txt          # Build configuration
├── README.md               # This file
├── main.cpp                # Entry point
├── include/                # Header files
│   ├── Token.h            # Token definitions and enums
│   └── Calculator.h       # Calculator class interface
└── src/                   # Implementation files
    └── Calculator.cpp     # Calculator class implementation
```

## Features

- **Tokenization**: Converts mathematical expressions into tokens
- **Support for**: Numbers, basic operations (+, -, *, /, %, ^), parentheses, brackets, braces
- **Modular Design**: Clean separation between interface and implementation
- **CMake Build System**: Easy compilation and dependency management

## Building the Project

### Prerequisites
- CMake 3.10 or higher
- C++17 compatible compiler (GCC, Clang, MSVC)

### Build Instructions

1. Create a build directory:
```bash
mkdir build
cd build
```

2. Generate build files:
```bash
cmake ..
```

3. Compile the project:
```bash
make
```

### Running the Calculator

```bash
./calculator
```

Enter a mathematical expression and press Enter to see the tokenization output.

## Example Usage

```bash
$ echo "1+2*3" | ./calculator
1+2*3
1 ADD + 2 MUL * 3
```

```bash
$ echo "[5*6]" | ./calculator
[5*6]
LBRACKET 5 MUL 6 RBRACKET
```

## Development

The project is organized with clear separation of concerns:

- **Token.h**: Defines the core data structures (enums and Token struct)
- **Calculator.h**: Declares the Calculator class interface
- **Calculator.cpp**: Implements tokenization and utility methods
- **main.cpp**: Provides the command-line interface

This modular structure makes it easy to extend functionality, add new token types, or implement additional parsing features.
