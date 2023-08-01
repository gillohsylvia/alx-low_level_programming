# Function pointers
# Resources
* [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
* [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
* [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
* [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
* [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

# Learning Objectives

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

# Tasks

## What's my name

Write a function that prints a name.

* Prototype: `void print_name(char *name, void (*f)(char *));`

**Solution:** [0-print_name.c](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c)

```
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Danton", print_name_as_is);
    print_name("Rick Harris", print_name_uppercase);
    printf("\n");
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o a
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Danton
Hello, my uppercase name is RICK HARRIS
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$
```

## If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
* where `size` is the size of the array
* and `action` is a pointer to the function you need to use

**Solution:** [1-array_iterator.c](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c)

```
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o b
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
$ amonkeyprogrammer@ubuntu:~//0x0e. Function pointers$
```

## To hell with circumstances; I create opportunities

Write a function that searches for an integer.

* Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
* where `size` is the number of elements in the array `array`
* `cmp` is a pointer to the function to be used to compare values
* `int_index` returns the index of the first element for which the `cmp` function does not return `0`
* If no element matches, return `-1`
* If size <= `0`, return `-1`

**Solution:** [2-int_index.c](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c)

```
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ cat 2-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o c
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./c 
2
1
2
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$
```

## A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

* You are allowed to use the standard library
* Usage: `calc num1 operator num2`
* You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
* `operator` is one of the following:
    * `+`: addition
    * `-`: subtraction
    * `*`: multiplication
    * `/`: division
    * `%`: modulo
* The program prints the result of the operation, followed by a new line
* You can assume that the result of all operations can be stored in an `int`
* if the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
* if the operator is none of the above, print `Error`, followed by a new line, and exit with the status `99`
* if the user tries to divide (`/` or `%`) by 0, print `Error`, followed by a new line, and exit with the status `100`

**Solution:** [3-main.c](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-main.c), [3-op_functions.c](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c), [3-get_op_func.c](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c), [3-calc.h](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h)

### Compilation and examples

```
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '*' 98
100352
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '\*' 98
Error
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '%' 98
44
$ amonkeyprogrammer@ubuntu:~/0x0e. Function pointers$
```
## Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
Write a program that prints the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function.

* Usage: ./main number_of_bytes
* Output format:
 * the opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * listing ends with a new line
 * see example
* You are allowed to use printf and atoi
* You have to use atoi to convert the argument to an int
* If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
* If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
* You do not have to compile with any flags
Note: if you want to translate your opcodes to assembly instructions, you can use, for instance [udcli.](https://sourceforge.net/projects/udis86/)
```
julien@ubuntu:~/0x0e. Function pointers$ gcc -std=gnu89 100-main_opcodes.c -o main
julien@ubuntu:~/0x0e. Function pointers$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14
julien@ubuntu:~/0x0e. Function pointers$ objdump -d -j.text -M intel main
[...]
00000000004005f6 <main>:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f <main+0x29>
[...]
julien@ubuntu:~/0x0e. Function pointers$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp                
00000000004005f7 4889e5           mov rbp, rsp            
00000000004005fa 4883ec30         sub rsp, 0x30           
00000000004005fe 897ddc           mov [rbp-0x24], edi     
0000000000400601 488975d0         mov [rbp-0x30], rsi     
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f             
julien@ubuntu:~/0x0e. Function pointers$
``` 
* Note 0: je is equivalent to jz
* Note 1: depending on how you write your main function, and on which machine you compile your program, the opcodes(and by extension the assembly code) might be different than the above example
#### __Solution__: 100-main_opcodes.c
