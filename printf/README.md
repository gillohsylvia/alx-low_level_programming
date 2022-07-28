![img](https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png)

# _printf
```_printf``` is a custom implementation of the C programming function ```printf```.

**Prototype:** ```int _printf(const char *, ...);```

## Some Examples
**Integer**
* Input: ```_printf("There are %i dozens in a gross\n", 12);```
* Output: ```There are 12 dozens in a gross```

**Character**
* Input: ```_printf("The first letter in the alphabet is %c\n", 'A');```
* Output: ```The first letter in the alphabet is A```

**String**
* Input: ```_printf("%s\n", 'This is a string.');```
* Output: ```This is a string.```

**Decimal:**
* Input: ```_printf("%d\n", 1000);```
* Output:  ```1000```

**Rot13**
* Input: ```_printf("Unknown:[%R]\n", "HELLO WORLD");```
* Output:  ```URYYB JBEYQ```

**FLAGS**
* Input: ```printf("Flag: [%+ d]", 1230);```
* Output:  ```Flag: [+1230] => 13```

**OCTAL**
* Input: ```printf("Unsigned octal:[%o]", 6);```
* Output:  ```Unsigned octal:[6] => 18```



## Project Requirements
* All files will be compiled on Ubuntu 20.04 LTS
* Programs and functions will be compiled with gcc using flags -Wall -Werror -Wextra and -pedantic
* Code must follow the [Betty] style
* Global variables are not allowed
* Authorized functions and macros:
  * ```write``` (man 2 write)
  * ```malloc``` (man 3 malloc)
  * ```free``` (man 3 free)
  * ```va_start``` (man 3 va_start)
  * ```va_end``` (man 3 va_end)
  * ```va_copy``` (man 3 va_copy)
  * ```va_arg``` (man 3 va_arg)

## Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [x] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.
## Advanced Tasks
- [x] Handle conversion specifier ```b```.
- [x] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
- [x] Use a local buffer of 1024 chars in order to call write as little as possible.
- [x] Handle conversion specifier ```S```.
- [x] Handle conversion specifier ```p```.
- [x] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
- [x] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [x] Handle the field width for non-custom conversion specifiers.
- [x] Handle the precision for non-custom conversion specifiers.
- [x] Handle the ```0``` flag character for non-custom conversion specifiers.
- [x] Handle the custom conversion specifier ```r``` that prints the reversed string.
- [x] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
- [x] All above options should work well together.
## File Descriptions
**_printf.c**
* contains the  fucntion ```_printf```, which uses the prototype ```int _printf(const char *format, ...);```. The format string is composed of zero or more directives. See ```man 3 printf``` for more detail. **_printf** will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to **stdout**, the standard output stream.

**_putchar.c**
* contains the function ```_putchar```, which writes a character to stdout.

**main.h**
*contains all function prototypes used for ```_printf```.

**man_3_printf**
* manual page for the custom ```_printf``` function.

**functions.c** **functions1.c** **functions2.c**
* contains all function of each specifier used for ```_printf```.
* all function have its own description inside the file.

**handle_print.c**
* contains arguments types used for ```_printf```.

**get_flags.c**
* contains all function for each flag use for ```_printf```.

**utils.c**
* contains some necessary functionalities for ```_printf```.

**ger_width.c**
* contains functions to get width for spcifics spcifiers.

**writee_handlers.c**
* contains write functions.

By Affamuefuna Jane and ogbugo ifeanyi 
