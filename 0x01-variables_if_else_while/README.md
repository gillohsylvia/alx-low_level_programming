# C - Variables, if, else, while
## Resources
* [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/PkAydT3D9u5pN3nPCAlNZQ)
* [Keywords and identifiers](https://intranet.alxswe.com/rltoken/58ThnAAxwJv5s_ceKMMPhw)
* [integers](https://intranet.alxswe.com/rltoken/2sXkmDiD7BF7pNIOxMQWFA)
* [Arithmetic Operators in C](https://intranet.alxswe.com/rltoken/S-b9MN2iELhSEwCI093Vzw)
* [If statements in C](https://intranet.alxswe.com/rltoken/usvxrTB3ko5kGTq48p5fSA)
* [if…else statement](https://intranet.alxswe.com/rltoken/CU6mSX1qdZKOhDEgmToUGA)
* [Relational operators](https://intranet.alxswe.com/rltoken/O1N-qacaTC-BHXm3Dp3eUA)
* [Logical operators](https://intranet.alxswe.com/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ)
* [while loop in C](https://intranet.alxswe.com/rltoken/mwx2_bj3gIFEgCqdwdTp4w)
* [While loop](https://intranet.alxswe.com/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw)
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
