# 0x00. C - Hello, World

- **Solution:** Rolando Quiroz [rolandoquiroz@gmail.com](rolandoquiroz@gmail.com) [@rolandoquiroz](https://github.com/rolandoquiroz)
- **Problem statement:** Julien Barbier

![#cisfun](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg "#cisfun")


## Learning Objectives
----------------------

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/eJZ-xVeCra6EqIiwBOYYVg "explain to anyone"), **without the help of Google**:

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

More Info
---------

### Betty linter

To run the Betty linter just with command `betty <filename>`:

*   Go to the [Betty](https://github.com/holbertonschool/Betty "Betty") repository
*   Clone the [repo](https://github.com/holbertonschool/Betty "repo") to your local machine
*   `cd` into the Betty directory
*   Install the linter with `sudo ./install.sh`
*   `emacs` or `vi` a new file called `betty`, and copy the script below:

```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
*   Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
*   Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type `betty <filename>` to run the Betty linter!

## Quiz questions

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

- [x]
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
- [x]
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

* * *

Tasks
-----

| # | Name | File | Done |
|---|------|------|------|
| 0 |  Preprocessor     |   0-preprocessor   |  [x]    |
| 1 |  Compiler     |   1-compiler   |      |
| 2 |  Assembler   |   2-assembler   |      |
| 3 |  Name    |   3-name   |      |
| 4 |  Hello, puts   |   4-puts.c   |      |
| 5 |  Hello, printf    |  5-printf.c    |      |
| 6 |  Size is not grandeur, and territory does not make a nation     |   6-size.c    |     |
| 7 |  What happens when you type gcc main.c    |   Blog post   |      |
| 8 | Intel   |   100-intel   |      |
| 9 | UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity  |  101-quote.c    |      |