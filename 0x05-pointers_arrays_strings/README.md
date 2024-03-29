# 0x05. C - Pointers, arrays and strings

- **Solution:** Rolando Quiroz [rolandoquiroz@gmail.com](rolandoquiroz@gmail.com) [@rolandoquiroz](https://github.com/rolandoquiroz)
- **Problem statement:** Julien Barbier

![C_is_not_that_hard](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG "C_is_not_that_hard")


## Learning Objectives
----------------------

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/2021/02/feynman-learning-technique/ "explain to anyone"), **without the help of Google**:

### General

*   What are pointers and how to use them
*   What are arrays and how to use them
*   What are the differences between pointers and arrays
*   How to use strings and how to manipulate them
*   Scope of variables


Requirements
------------

### General

*   Allowed editors: `vi`, `vim`, `emacs`
*   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
*   All your files should end with a new line
*   A `README.md` file, at the root of the folder of the project is mandatory
*   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
*   You are not allowed to use global variables
*   No more than 5 functions per file
*   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
*   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
*   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
*   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
*   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
*   Don’t forget to push your header file

More Info
------------

You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - yet.

## Quiz questions

<details>
    <summary>Show/Hide</summary>

### Question #0

What is the size of a pointer to a `char` (on a 64-bit architecture)

- [ ] 1 byte
- [ ] 2 bytes
- [ ] 4 bytes
- [x] 8 bytes


### Question #1

What is the size of a pointer to an `int` (on a 64-bit architecture)

- [ ] 1 byte
- [ ] 2 bytes
- [ ] 4 bytes
- [x] 8 bytes

### Question #2

If we have a variable called `var` of type `int`, how can we get its address in memory?

- [ ] *var
- [ ] *(var)
- [x] &var

### Question #3

What is the identifier to print an address with `printf`?

- [ ] %a
- [ ] %d
- [x] %p
- [ ] %x

### Question #4

The process of getting the value that is stored in the memory location pointed to by a pointer is called:

- [ ] Pointing
- [ ] Accesing
- [x] Dereferencing
- [ ] Casting

### Question #5

Is it possible to declare a pointer to a pointer?

- [x] Yes
- [ ] No
- [ ] It depends on the type the pointer is pointing to

### Question #6

What happens when one tries to access an illegal memory location?

- [ ] The operation is ignored
- [x] Segmentation fault
- [ ] The computer shuts down
- [ ] There’s a chance for the computer to catch fire, and sometimes even explode

### Question #7

What is the value of `n` after the following code is executed?

```C
int n = 98;
int *p = &n;
```
- [ ] 0
- [x] 98
- [ ] 99
- [ ] 402

### Question #8

What is the value of `n` after the following code is executed?

```C
int n = 98;
int *p = &n;

p = 402;
```
- [ ] 0
- [x] 98
- [ ] 99
- [ ] 402

### Question #9

What is the value of `n` after the following code is executed?

```C
int n = 98;
int *p = &n;

*p = 402;
```
- [ ] 0
- [ ] 98
- [ ] 99
- [x] 402

### Question #10

What is the value of `n` after the following code is executed?

```C
int n = 98;
int *p = &n;

*p++;
```
- [ ] 0
- [x] 98
- [ ] 99
- [ ] 402

### Question #11

We declare the following variable

```C
int arr[5];
```

What is the size in memory of the variable `arr`?

- [ ] 4 bytes
- [ ] 5 bytes
- [ ] 8 bytes
- [ ] 10 bytes
- [ ] 32 bytes
- [x] 20 bytes

### Question #12

We declare the following variable

```C
int arr[5];
```

What is the equivalent of typing `arr[2]`?

- [ ] arr + 2
- [ ] *arr + 2
- [x] *(arr + 2)

</details>

* * *

Tasks
-----

|  #  | Name | File | Done |
|:---:|------|------|:------:|
| 0 |  98 Battery st.  |  [0-reset_to_98.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c "0-reset_to_98.c")  |  :heavy_check_mark:  |
| 1 |  Don't swap horses in crossing a stream  |  [1-swap.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c "1-swap.c")  | :heavy_check_mark:   |
| 2 |  This report, by its very length, defends itself against the risk of being read    |   [2-strlen.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c "2-strlen.c")  |   :heavy_check_mark:   |
| 3 |  I do not fear computers. I fear the lack of them     |   [3-puts.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c "3-puts.c")   |   :heavy_check_mark:   |
| 4 |  I can only go one way. I've not got a reverse gear   |   [4-print_rev.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c "4-print_rev.c")   |  :heavy_check_mark:    |
| 5 |  A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes     |  [5-rev_string.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c "5-rev_string.c")    |   :heavy_check_mark:   |
| 6 |  Half the lies they tell about me aren't true   |   [6-puts2.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c "6-puts2.c")    |  :heavy_check_mark:   |
| 7 |  Winning is only half of it. Having fun is the other half  |  [7-puts_half.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c "7-puts_half.c")  |  :heavy_check_mark:    |
| 8 |  Arrays are not pointers  |   [8-print_array.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c "8-print_array.c")  |  :heavy_check_mark:    |
| 9 | strcpy |  [9-strcpy.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c "9-strcpy.c")  |  :heavy_check_mark:    |
| 10 |  Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers  |   [100-atoi.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/100-atoi.c "100-atoi.c")   |   :heavy_check_mark:   |
| 11 |  Don't hate the hacker, hate the code  |   [101-keygen.c](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/101-keygen.c "101-keygen.c")  |   :heavy_check_mark:   |

Repo:
-----------
- GitHub repository: [holbertonschool-low_level_programming](https://github.com/rolandoquiroz/holbertonschool-low_level_programming)
- Directory: [0x05-pointers_arrays_strings](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/tree/master/0x05-pointers_arrays_strings)
- Code language: `c` (project based) 