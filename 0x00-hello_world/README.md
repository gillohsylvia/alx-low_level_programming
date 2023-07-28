# C programming
## Resources
* [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230728%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230728T062644Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=75908414c505082a6f407ef8d207a05b3095b7f7efb2bd02a96bf2cf5b352f43)
* [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
* [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
* [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
* [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
* [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
* [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
* [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
* [Linus Torvalds on C vs. C++](https://harmful.cat-v.org/software/c++/linus)
#### man or help
* gcc
* printf (3)
* puts
* putchar
## Learning Objectives
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type ___gcc main.c__
* What is an entry point
* What is **main**
* How to print text using __printf, puts and putchar__
* How to get the size of a specific type using the unary operator __sizeof__
* How to compile using __gcc__
* What is the default program name when compiling with __gcc__
* What is the official C coding style and how to check your code with __betty-style__
* How to find the right header to include in your source code when using a standard library function
* How does the **main** function influence the return value of the program

## Requirements 
* Allowed editors: __vi, vim, emacs__
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options __-Wall -Werror -Wextra -pedantic -std=gnu89__
* All your files should end with a new line
* A README.md file at the root of the repo, containing a description of the repository
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the **Betty** style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
* Allowed editors: __vi, vim, emacs__
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long __($ wc -l file should print 2)__
* All your files should end with a new line
* The first line of all your files should be exactly __#!/bin/bash__
#### Betty linter
To run the Betty linter just with command __betty <filename>:__

* Go to the [Betty](https://intranet.alxswe.com/rltoken/QkZtBg3ps5iLBlUdX-CPJQ) repository
* Clone the [repo](https://intranet.alxswe.com/rltoken/QkZtBg3ps5iLBlUdX-CPJQ) to your local machine
* cd into the Betty directory
* Install the linter with __sudo ./install.sh__
* __emacs__ or **vi** a new file called **betty**, and copy the script below:
## Tasks
#### 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c
#### 1. Compiler
Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
* Example: if the C file is main.c, the output file should be main.o
#### 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
* Example: if the C file is main.c, the output file should be main.s
#### 3. Name
Write a script that compiles a C file and creates an executable named cisfun.

* The C file name will be saved in the variable $CFILE
#### 4. Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0
#### 5. Hello, printf
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

* Use the function printf
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option
#### 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.

* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

#### 7. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE.
* The output file should be named the same as the C file, but with the extension .s instead of .c.
* Example: if the C file is main.c, the output file should be main.s
#### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
* Your program should return 1
* Your program should compile without any warnings when using the -Wall gcc option
#### 
