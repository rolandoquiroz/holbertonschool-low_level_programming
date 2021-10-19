# 0x07. C - Even more pointers, arrays and strings

- **Solution:** Rolando Quiroz [rolandoquiroz@gmail.com](rolandoquiroz@gmail.com) [@rolandoquiroz](https://github.com/rolandoquiroz)
- **Problem statement:** Julien Barbier

![Xzibit](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/218/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg "Xzibit")


## Learning Objectives
----------------------

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/2021/02/feynman-learning-technique/ "explain to anyone"), **without the help of Google**:

### General

*   What are pointers to pointers and how to use them
*   What are multidimensional arrays and how to use them
*   What are the most common C standard library functions to manipulate strings

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

What is the size of `p` in this code?

```C
int *p;
```

- [ ] 4 bytes
- [x] 8 bytes
- [ ] 16 bytes


### Question #1

What is the size of `p` in this code?

```C
int **p;
```

- [ ] 4 bytes
- [x] 8 bytes
- [ ] 16 bytes

### Question #2

In this following code, what is the value of `a[0][0]`?

```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [x] 1
- [ ] 2
- [ ] 3
- [ ] 4

### Question #3

In this following code, what is the value of `a[3][0]`?

```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [x] 7
- [ ] 8
- [ ] {7, 8}
- [ ] 5

### Question #4

In this following code, what is the value of `a[3][1]`?

```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [x] 7
- [ ] 8
- [ ] {7, 8}
- [ ] 5

### Question #5

In this following code, what is the value of `a[1][1]`?

```C
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [ ] 1
- [ ] 2
- [ ] 3
- [x] 4

### Question #6

What is the size of `*p` in this code?

```C
int **p;
```

- [ ] 4 bytes
- [x] 8 bytes
- [ ] 16 bytes

### Question #7

What is the size of `*p` in this code?

```C
int *p;
```

- [x] 4 bytes
- [ ] 8 bytes
- [ ] 16 bytes

### Question #8

What is stored inside a pointer to a pointer to an int?

- [ ] An address where an int is stored
- [ ] An int
- [x] An address where an address is stored



</details>

* * *

Tasks
-----

|  #  | Name | File | Done |
|:---:|------|------|:------:|
| 0 |  98 Battery st.  |  0-reset_to_98.c  |  :heavy_check_mark:  |
| 1 |  Don't swap horses in crossing a stream  |   1-swap.c  | :heavy_check_mark:   |
| 2 |  This report, by its very length, defends itself against the risk of being read    |   2-strlen.c   |   :heavy_check_mark:   |
| 3 |  I do not fear computers. I fear the lack of them     |   3-puts.c   |   :heavy_check_mark:   |
| 4 |  I can only go one way. I've not got a reverse gear   |   4-print_rev.c   |  :heavy_check_mark:    |
| 5 |  A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes     |  5-rev_string.c    |   :heavy_check_mark:   |
| 6 |  Half the lies they tell about me aren't true   |   6-puts2.c    |  :heavy_check_mark:   |
| 7 |  Winning is only half of it. Having fun is the other half  |  7-puts_half.c  |  :heavy_check_mark:    |
| 8 |  Arrays are not pointers  |   8-print_array.c  |  :heavy_check_mark:    |
| 9 | strcpy |  9-strcpy.c  |  :heavy_check_mark:    |
| 10 |  Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers  |   100-atoi.c   |   :heavy_check_mark:   |
| 11 |  Don't hate the hacker, hate the code  |   101-keygen.c  |   :heavy_check_mark:   |

Repo:
-----------
- GitHub repository: [holbertonschool-low_level_programming](https://github.com/rolandoquiroz/holbertonschool-low_level_programming)
- Directory: [0x05-pointers_arrays_strings](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/tree/master/0x05-pointers_arrays_strings)
- Code language: `c` (project based) 