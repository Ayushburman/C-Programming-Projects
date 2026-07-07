Here is
# 1. Fundamental Facts

* C was developed by Dennis Ritchie in **1972**.
* Developed at Bell Labs.
* C is called the **Mother of Programming Languages**.
* Most operating systems, databases, compilers, and embedded software are written in C.
* C is a **procedural** programming language.
* C is **case-sensitive**.
* Every C program begins execution from `main()`.

---

# 2. Memory Facts

* Every variable occupies memory.
* `sizeof(char)` is always **1 byte**.
* Pointer size depends on the architecture:

  * 32-bit → 4 bytes
  * 64-bit → 8 bytes
* Arrays are stored in **contiguous memory**.
* Structures usually have **padding**.
* Dynamic memory comes from the **heap**.
* Local variables are stored on the **stack**.

---

# 3. Pointer Facts

* Pointers store **addresses**, not values.
* `NULL` means the pointer points to nothing.
* Double pointers store pointer addresses.
* Pointer arithmetic depends on the data type.

```c
int a = 5;
int *p = &a;

p++;
```

`p` increases by `sizeof(int)` bytes.

---

# 4. Arrays

```c
int a[5];
```

Array indexing starts at **0**.

Fun fact:

```c
a[i]
```

is identical to

```c
*(a+i)
```

Even stranger:

```c
2[a]
```

works exactly like

```c
a[2]
```

because array indexing is defined through pointer arithmetic.

---

# 5. String Tricks

```c
char s[]="Hello";
```

Length is **5**, but memory used is **6** because of the null terminator `\0`.

```c
printf("%s",s);
```

prints until `\0`.

---

# 6. ASCII Tricks

```c
'A'
```

equals **65**

```c
'a'
```

equals **97**

Difference:

```
32
```

Convert lowercase to uppercase:

```c
ch = ch - 32;
```

Convert uppercase to lowercase:

```c
ch = ch + 32;
```

(or use the standard library functions `toupper()` and `tolower()` for portability).

---

# 7. Bitwise Tricks

Multiply by 2

```c
x<<1
```

Multiply by 4

```c
x<<2
```

Divide by 2

```c
x>>1
```

Check Odd

```c
if(n&1)
```

Even

```c
if(!(n&1))
```

Swap numbers

```c
a^=b;
b^=a;
a^=b;
```

---

# 8. Swap Tricks

Without temporary variable

```c
a=a+b;
b=a-b;
a=a-b;
```

Using XOR

```c
a^=b;
b^=a;
a^=b;
```

---

# 9. Useful Operators

Increment

```c
++
```

Decrement

```c
--
```

Address

```c
&
```

Dereference

```c
*
```

Size

```c
sizeof()
```

Conditional

```c
? :
```

Comma Operator

```c
,
```

---

# 10. Loop Tricks

Infinite Loop

```c
for(;;)
```

also

```c
while(1)
```

---

# 11. `sizeof()` Facts

```c
sizeof(int)
```

evaluates at compile time for ordinary types.

```c
sizeof(arr)/sizeof(arr[0])
```

Finds the number of elements in an array.

---

# 12. Boolean Facts

C originally had no built-in `bool`.

Since C99:

```c
#include <stdbool.h>
```

```c
bool x=true;
```

---

# 13. Function Tricks

Recursion

```c
factorial(n)
```

Function Pointer

```c
int (*ptr)(int,int);
```

---

# 14. Macro Tricks

```c
#define PI 3.14
```

Parameterized macro

```c
#define SQUARE(x) ((x)*(x))
```

---

# 15. Preprocessor Tricks

```c
#include
```

```c
#define
```

```c
#undef
```

```c
#ifdef
```

```c
#ifndef
```

---

# 16. Common Interview Tricks

Difference

```
++i
```

and

```
i++
```

* Pre-increment updates first.
* Post-increment uses the current value, then updates.

---

## Assignment inside condition

```c
if(x=5)
```

This assigns 5 to `x`, then the condition evaluates as true because 5 is non-zero.

Correct comparison

```c
if(x==5)
```

---

## Empty Statement

```c
if(x);

{
printf("Hello");
}
```

The semicolon ends the `if`, so the block always executes.

---

# 17. Interesting Facts

## Zero is False

```c
if(0)
```

False

Everything else is true.

---

## Character is Integer

```c
printf("%d",'A');
```

Output

```
65
```

---

## String is Character Array

```c
char name[]="Ayush";
```

---

## No String Data Type

C has no built-in string type.

---

## No Classes

Unlike C++, C has no classes or objects.

---

## No Exception Handling

No `try`, `catch`, or `throw`.

---

# 18. Bit Manipulation Tricks

Turn ON bit

```c
x |= (1<<k);
```

Turn OFF bit

```c
x &= ~(1<<k);
```

Toggle bit

```c
x ^= (1<<k);
```

Check bit

```c
x&(1<<k)
```

---

# 19. Fast Math Tricks

Power of 2

```c
1<<n
```

Check Power of 2

```c
n && !(n&(n-1))
```

---

# 20. Common Mistakes

* Forgetting `;`
* Using `=` instead of `==`
* Forgetting `&` in `scanf()`
* Buffer overflow with unsafe input functions
* Forgetting to `free()` dynamically allocated memory
* Returning the address of a local variable
* Accessing arrays out of bounds
* Using uninitialized variables

---

# 21. Fun Facts

* The shortest valid C program can fit in a single line.
* Most of the Linux kernel is written in C.
* Parts of operating systems such as Microsoft Windows and macOS include substantial C code.
* The original Git was written primarily in C.
* Many databases, including SQLite, are implemented in C.
* C compilers are often used to build compilers for other languages.
* C influenced languages like C++, Java, C#, JavaScript, PHP, Go, and Rust.

---

# 22. Essential Standard Library Functions

| Category     | Examples                                                  |
| ------------ | --------------------------------------------------------- |
| Input/Output | `printf()`, `scanf()`, `getchar()`, `putchar()`           |
| Strings      | `strlen()`, `strcpy()`, `strcmp()`, `strcat()`            |
| Memory       | `malloc()`, `calloc()`, `realloc()`, `free()`             |
| Files        | `fopen()`, `fclose()`, `fprintf()`, `fscanf()`, `fgets()` |
| Math         | `sqrt()`, `pow()`, `abs()`, `ceil()`, `floor()`           |
| Character    | `toupper()`, `tolower()`, `isdigit()`, `isalpha()`        |

---

## Pro Tips for Placements

Focus on mastering these topics before interviews:

1. Pointers and pointer arithmetic
2. Dynamic memory allocation
3. Arrays and strings
4. Structures and unions
5. File handling
6. Recursion
7. Bitwise operators
8. Linked lists, stacks, queues, trees, and graphs
9. Time and space complexity
10. Common C pitfalls such as undefined behavior, memory leaks, dangling pointers, and buffer overflows

These concepts are the foundation of both C programming interviews and systems programming roles.
