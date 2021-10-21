# 0x08. C - Recursion

- **Problem statement:** Julien Barbier
- **Solution:** Rolando Quiroz [rolandoquiroz@gmail.com](rolandoquiroz@gmail.com) [@rolandoquiroz](https://github.com/rolandoquiroz)

![Inception](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/219/a88.jpg "Inception")


## Learning Objectives
----------------------

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/2021/02/feynman-learning-technique/ "explain to anyone"), **without the help of Google**:

### General


*   What is recursion
*   How to implement recursion
*   In what situations you should implement recursion
*   In what situations you shouldn’t implement recursion


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
*   **You are not allowed to use any kind of loops**
*   You are not allowed to use static variables

More Info
------------

You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - yet.

## Quiz questions

<details>
    <summary>Show/Hide</summary>

### Question #0

What does this code print?

```C
void print(int nb)
{
    printf("%d", nb);
    nb --;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(2);
    return (0);
}
```

- [ ] 012
- [ ] 12
- [x] 21
- [ ] 210


### Question #1

What does this code print?

```C
void print(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}
```

- [x] 4321
- [ ] 43210
- [ ] 321
- [ ] 3210

### Question #2

What does this code print?

```C
void print(int nb)
{
    printf("%d", nb);
    nb ++;
    if (nb < 10) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}
```

- [ ] 987654
- [ ] 109876543
- [ ] 345678910
- [x] 456789

### Question #3

What does this code print?

```C
void print(int nb)
{
    if (nb < 0) 
    {
        return;
    }
    printf("%d", nb);
    nb --;
    print(nb);
}

int main(void)
{
    print(4);
    return (0);
}
```

- [ ] 01234
- [x] 43210
- [ ] 1234
- [ ] 4321

### Question #4

What does this code print?

```C
int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}
```

- [ ] 64200
- [x] 00246
- [ ] 01234568

</details>

* * *

Tasks
-----

|  #  | Name | File | Header file | Main file| Done |
|:---:|------|------|-------------|----------|:------:|
| 0 |  She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget   |  0-puts_recursion.c | holberton.h | 0-main.c | :heavy_check_mark:  |
| 1 |  Why is it so important to dream? Because, in my dreams we are together  |  1-print_rev_recursion.c  | holberton.h | 1-main.c | :heavy_check_mark:   |
| 2 |  Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange   |  2-strlen_recursion.c | holberton.h | 2-main.c | :heavy_check_mark:   |
| 3 |  You mustn't be afraid to dream a little bigger, darling  |  3-factorial.c | holberton.h | 3-main.c | :heavy_check_mark:   |
| 4 |  Once an idea has taken hold of the brain it's almost impossible to eradicate   |  4-pow_recursion.c  | holberton.h | 4-main.c | :heavy_check_mark:    |
| 5 |  Your subconscious is looking for the dreamer   |  5-sqrt_recursion.c  | holberton.h | 5-main.c | :heavy_check_mark:   |
| 6 |  Inception. Is it possible?   |  6-is_prime_number.c   |  holberton.h  | 7-main.c | :heavy_check_mark:   |
| 7 |  They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything   |  100-is_palindrome.c  |  holberton.h |  100-main.c  | :heavy_check_mark:    |
| 8 |   Inception. Now, before you bother telling me it's impossible...   |  101-wildcmp.c  |  holberton.h |  101-main.c | :heavy_check_mark:    |

Repo:
-----------
- GitHub repository: [holbertonschool-low_level_programming](https://github.com/rolandoquiroz/holbertonschool-low_level_programming)
- Directory: [0x08-recursion](https://github.com/rolandoquiroz/holbertonschool-low_level_programming/tree/master/0x08-recursion)
- Code language: `c` (project based) 