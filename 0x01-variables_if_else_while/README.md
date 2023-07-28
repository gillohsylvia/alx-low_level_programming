# C - Variables, if, else, while
## Resources
* [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230728%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230728T063510Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=38e2e05684b0c59a8cb8232ba2d1b02116d63380edd461e987d46d5c85bbcb4a)
* [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
* [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
* [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
* [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
* [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
* [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
* [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
* [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
* [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)
## Learning Objectives
* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the `if, if ... else statements`
* How to use comments
* How to declare variables of types `char, int, unsigned int`
* How to assign values to variables
* How to print the values of variables of type `char, int, unsigned int` with `printf`
* How to use the `while loop`
* How to use variables with the `while` loop
* How to print variables using `printf`
* What is the `ASCII` character set
* What are the purpose of the `gcc` flags `-m32` and `-m64`
## Tasks :page_with_curl:

* **0. Positive anything is better than negative nothing**
  * [0-positive_or_negative.c](./0-positive_or_negative.c): C program that prints whether
  a randomly generated number is positive or negative, followed by a new line:
    * Completion of [this source code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c).
    * Stores a different random number every time the program is run.
    * Prints the number followed by `is positive` if the number is greater than 0, `is zero` if the number is zero, or `is negative` if the number is less than 0.

* **1. The last digit**
  * [1-last_digit.c](./1-last_digit.c): C program that prints the last digit of a
  randomly generated number, followed by a new line:
    * Completion of [this source code](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c).
    * Stores a different value every time the program is run.
    * Prints the string `Last digit of` [number] `is` [last_digit] `and is` followed
    by `greater than 5` if the digit is greater than 5, `0` if the digit is 0, or
    `less than 6 and not 0` if the digit is less than 6 and not 0.

* **2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * [2-print_alphabet.c](./2-print_alphabet.c): C program that prints the alphabet in
  lowercase, followed by a new line, using only the `putchar` function exactly twice.

* **3. When I was having that alphabet soup, I never thought that it would pay off**
  * [3-print_alphabets.c](./3-print_alphabets.c): C program that prints the alphabet in
  lowercase, then in uppercase, followed by a new line, using only the `putchar`
  function exactly three times.

* **4. alphABET**
  * [4-print_alphabt.c](./4-print_alphabt.c): C program that prints the alphabet in lowercase
  except for the letters `q` and `e`, followed by a new line, using only the `putchar`
  function exactly twice.

* **5. Numbers**
  * [5-print_numbers.c](./5-print_numbers.c): C program that prints all single digit numbers
  of base 10 starting from `0`, followed by a new line.

* **6. Numberz**
  * [6-print_numberz.c](./6-print_numberz.c): C program that prints all single digit numbers
  of base 10 starting from `0`, followed by a new line, using only the `putchar` function
  exactly twice without any variables of type `char`.

* **7. Smile in the mirror**
  * [7-print_tebahpla.c](./7-print_tebahpla.c): C program that prints the lowercase alphabet
  in reverse, followed by a new line, using only the `putchar` function exactly twice.

* **8. Hexadecimal**
  * [8-print_base16.c](./8-print_base16.c): C program that prints all the numbers of base
  16 in lowercase, followed by a new line, using only the `putchar` function exactly three
  times.

* **9. Patience, persistence and perspiration make an unbeatable combination for success**
  * [9-print_comb.c](./9-print_comb.c): C program that prints all possible combinations of
  single-digit numbers, using only the `putchar` function exactly four times without any
  variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * Numbers are printed in ascending order.

* **10. 00...99**
  * [10-print_comb2.c](./10-print_comb2.c): C program that prints the numbers from `00`
  to `99` using only the `putchar` function exactly five times without any variables of
  type `char`:
    * Numbers are separated by `,`, followed by a space.
    * Numbers are printed in ascending order, with two digits.

* **11. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
  * [100-print_comb3.c](./100-print_comb3.c): C program that prints all possible different
  combinations of two digits using only the `putchar` function exactly five times without any
  variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * The two digits are different.
    * `01` and `10` are considered the same combination of the two digits `0` and `1`.
    * Prints only the smallest combination of two digits.
    * Numbers are printed in ascending order.

* **12. The success combination in business is: Do what you do better... and: do more of what you do...**
  * [101-print_comb4.c](./101-print_comb4.c): C program that prints all possible different
  combinations of three digits using only the `putchar` function exactly six times without
  any variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * The three digits are different.
    * `012`, `120`, `102`, `021`, `201` and `210` are considered the same combination of the three digits `0`, `1` and `2`.
    * Prints only the smallest combination of three digits.
    * Numbers are printed in ascending order.

* **13. Software is eating the World**
  * [102-print_comb5.c](./102-print_comb5.c): C program that prints all possible combinations
  of two-digit numbers using only the `putchar` function exactly eight times without any
  variables of type `char`:
    * Numbers range from `0` to `99`.
    * Two numbers are separated by a space.
    * Numbers are printed with two digits [ie. `1` is printed as `01`].
    * `00 01` and `01 00` are considered the same as the combination of of the numbers `0` and `1`.
    * Combinations of numbers are separated by `,`, followed by a space.
    * Combinations of numbers are printed in ascending order.
