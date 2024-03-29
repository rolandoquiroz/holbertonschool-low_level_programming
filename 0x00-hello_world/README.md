# 0x00. C - Hello, World

- **Solution:** Rolando Quiroz [rolandoquiroz@gmail.com](rolandoquiroz@gmail.com) [@rolandoquiroz](https://github.com/rolandoquiroz)
- **Problem statement:** Julien Barbier

![#cisfun](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg "#cisfun")


## Learning Objectives
----------------------

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/2021/02/feynman-learning-technique/ "explain to anyone"), **without the help of Google**:

### General

*   Why C programming is awesome
*   Who invented C
*   Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
*   What happens when you type `gcc main.c`
*   What is an entry point
*   What is `main`
*   How to print text using `printf`, `puts` and `putchar`
*   How to get the size of a specific type using the unary operator `sizeof`
*   How to compile using `gcc`
*   What is the default program name when compiling with `gcc`
*   What is the official C coding style and how to check your code with `betty-style`
*   How to find the right header to include in your source code when using a standard library function
*   How does the `main` function influence the return value of the program

Requirements
------------

### C

*   Allowed editors: `vi`, `vim`, `emacs`
*   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
*   All your files should end with a new line
*   A `README.md` file at the root of the repo, containing a description of the repository
*   A `README.md` file, at the root of the folder of _this_ project, containing a description of the project
*   There should be no errors and no warnings during compilation
*   You are not allowed to use `system`
*   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Shell Scripts

*   Allowed editors: `vi`, `vim`, `emacs`
*   All your scripts will be tested on Ubuntu 20.04 LTS
*   All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
*   All your files should end with a new line
*   The first line of all your files should be exactly `#!/bin/bash`

## Quiz questions

<details>
    <summary>Show/Hide</summary>

### Question #0

In which category belongs the C programming language?

- [ ] Interpreted language
- [x] Compiled language

### Question #1

What is the common extension for a C source file?

- [ ] .txt
- [x] .c
- [ ] .cpp
- [ ] .py

### Question #2

What is the common extension for a C header file?

- [ ] .header
- [ ] .hpp
- [x] .h
- [ ] .ch

### Question #3

Which command can be used to compile a C source file?

- [ ] c-compiler
- [x] gcc
- [ ] bash

### Question #4

Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?

- :white_check_mark:
```c
    /* Comment */
```
- [ ]
```c
    // Comment
```
- [ ]
```c
    /*
    Comment
    */
```
- :white_check_mark:
```c
   /*
    * Comment
    */
```
- [ ]
```c
    # Comment
```
- [ ]
```c
    /* Comment /* nested */ */
```

### Question #5

What are the different steps to form an executable file from C source code

- [ ] Interpretation, compilation and assembly
- [x] Preprocessing, compilation, assembly, and linking
- [ ] Interpretation, assembly and compilation
- [ ] Compilation and linking
- [ ] Preprocessing and compilation

</details>

* * *

Tasks
-----

| # | Name | File | Done |
|---|------|------|:------:|
| 0 |  Preprocessor     |   0-preprocessor   |   :heavy_check_mark:   |
| 1 |  Compiler     |   1-compiler   |   :heavy_check_mark:   |
| 2 |  Assembler   |   2-assembler   |   :heavy_check_mark:   |
| 3 |  Name    |   3-name   |   :heavy_check_mark:   |
| 4 |  Hello, puts   |   4-puts.c   |  :heavy_check_mark:    |
| 5 |  Hello, printf    |  5-printf.c    |   :heavy_check_mark:   |
| 6 |  Size is not grandeur, and territory does not make a nation     |   6-size.c    |  :heavy_check_mark:   |
| 7 |  What happens when you type gcc main.c    |   Blog post   |  :heavy_check_mark:    |
| 8 | Intel   |   100-intel   |  :heavy_check_mark:    |
| 9 | UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity  |  101-quote.c    |  :heavy_check_mark:    |

Repo:
-----------
- GitHub repository: [holbertonschool-low_level_programming](https://github.com/rolandoquiroz/holbertonschool-low_level_programming)
- Directory: [0x00-hello_world](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/tree/master/0x00-hello_world)