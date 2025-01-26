# Calculator Application with User Authentication
#
A simple C-based calculator application that includes user registration and login functionality along with basic mathematical operations.

## Features

### Authentication
- User Registration
- User Login
- Secure data storage in text file

### Mathematical Operations
- Addition (multiple numbers)
- Subtraction (multiple numbers)
- Multiplication (multiple numbers)
- Division (multiple numbers)
- Average calculation
- Logarithm (with custom base)
- Square Root

## Requirements
- C compiler (GCC recommended)
- Standard C libraries:
    - stdio.h
    - string.h
    - math.h
    - stdlib.h

## How to Run
1. Compile the source code:
     ```bash
     gcc AuthCalculator.c -o calculator
     ```
2. Run the executable:
     ```bash
     ./calculator
     ```

## Usage
1. First, register an account using the registration menu
2. Login with your credentials
3. Select from available mathematical operations
4. Follow the prompts to input numbers
5. View the calculated results

## File Structure
- `Mini_Project.c` - Main source code
- `User.txt` - Storage file for user credentials

## Notes
- The system uses a simple file-based storage system for user credentials
- All mathematical operations support floating-point numbers
- The interface is command-line based with clear screen functionality