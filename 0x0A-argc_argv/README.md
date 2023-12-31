# 0x0A. C - argc, argv

## Resources

### Read or watch:


    Arguments to main
    argc and argv
    What does argc and argv mean?
    how to compile with unused variables


## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General


    How to use arguments passed to your program
    What are two prototypes of main that you know of, and in which case do you use one or the other
    How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters


## Requirements

### General


    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 14.04 LTS
    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
    Dont forget to push your header file
    You are allowed to use the standard library

## Task

### Task 0
Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program

### Task 1
Write a program that prints the number of arguments passed into it.
* Your program should print a number, followed by a new line

### Task 2
Write a program that prints all arguments it receives.
* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

### Task 3
Write a program that multiplies two numbers.
* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

### Task 4
Write a program that adds positive numbers.
* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
* You can assume that numbers and the addition of all the numbers can be stored in an int
