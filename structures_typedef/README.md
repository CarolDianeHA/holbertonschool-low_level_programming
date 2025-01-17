# Structures and typedef

## Structure
Structure
: A structure is a user defined data type available in C that allows to combine data items of different kinkds.

### Structure Declarations

- You can define a structure in the global scope of your program (outside of all your functions, just like the functions prototypes).
- You can declare elements of your structure in its scope.

```c
struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    return (0);
}
```

### Structures

- You can access the elements of your structure by using the `'.'` symbol.

```c
struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    return(0);
}
```
<details><summary>Example - step 0</summary>

![step0](https://github.com/CarolDianeHA/holbertonschool-low_level_programming/blob/main/structures_typedef/README%20Images/Step0.png)

```c
#include <stdio.h>

struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    user.email = "foo@hbtn.io";
    user.age = 98;
    return(0);
}
```
</details>

<details><summary>Example - step 1</summary>

![step1](https://github.com/CarolDianeHA/holbertonschool-low_level_programming/blob/main/structures_typedef/README%20Images/Step1.png)

```c
#include <stdio.h>

struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    user.email = "foo@hbtn.io";
    user.age = 98;
    return(0);
}
```
</details>

<details><summary>Example - step 2</summary>

![stpe2](https://github.com/CarolDianeHA/holbertonschool-low_level_programming/blob/main/structures_typedef/README%20Images/Step2.png)

```c
#include <stdio.h>

struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    user.email = "foo@hbtn.io";
    user.age = 98;
    return(0);
}
```
</details>

<details><summary>Example - step 3</summary>

![step3](https://github.com/CarolDianeHA/holbertonschool-low_level_programming/blob/main/structures_typedef/README%20Images/Step3.png)

```c
#include <stdio.h>

struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    user.email = "foo@hbtn.io";
    user.age = 98;
    return(0);
}
```
</details>

## Pointers to structures

- To access elements of a pointer to a structure, you have to dereference the pointer an then access to the data using the `'.'` symbol.

### But
- There is a simple way to do that, just by using `'->'` symbol. This symbol is equivalent to dereferencing `+` using `'.'`.

```c
struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;
    struct User *ptr;

    ptr = &user;
    /* Dereferencing the pointer before access the data with the '.' symbol */

    (*ptr).name = "Foo Bar";
    /* Using '->' works the same, and is so much easier */

    ptr->email = "foo@hbtn.com";
    return(0);
}
```

## typedef
typedef
: The C programming language provides a keyword called typedef, which you can use to give a type, a new name.

- After this type definition, the identifier 'byte' can be used as an abbreviation for the type unsigned char, like in the example.

```c
typedef unsigned char byte;

int main(void)
{
    byte c;

    c = 200;
    return (0);
}
```
- You can also use typedef with structures to define a new data type.

```c
struct Computer {
    char *name;
    char *brand;
};

typedef struct Computer Computer;
```
```c
typedef struct Computer{
    char *name;
    char *brand;
} Computer;
```
- Then use that data type to define structure variables directly like in the example..

```c
typedef struct User
{
    char *name;
    char *email;
    int age;
} user;

int main(void)
{
    struct User user;
    user user2;

    return (0);
}
```