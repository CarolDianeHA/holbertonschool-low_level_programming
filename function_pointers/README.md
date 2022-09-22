# Function Pointer in C

In C, like normal data pointers (int *, char *, etc), we can have pointers to functions. Following is a simple example that shows declaration and function call using function pointer.

```c
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	// fun_ptr is a pointer to function fun()
	void (*fun_ptr)(int) = &fun;

	/* The above line is equivalent of following two
	void (*fun_ptr)(int);
	fun_ptr = &fun;
	*/

	// Invoking fun() using fun_ptr
	(*fun_ptr)(10);

	return 0;
}
```

Output:
```
Value of a is 10
```

Why do we need an extra bracket around function pointers like `fun_ptr` in above example?
If we remove bracket, then the expression `“void (*fun_ptr)(int)”` becomes `“void *fun_ptr(int)”` which is declaration of a function that returns void pointer.  

See following post for details. [How to declare a pointer to a function?](https://www.geeksforgeeks.org/how-to-declare-a-pointer-to-a-function/)

## Following are some interesting facts about function pointers.

1. Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.

2. Unlike normal pointers, we do not allocate de-allocate memory using function pointers.

3. A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator `‘&’` in assignment. We have also changed function call by removing `*`, the program still works.

```c
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	void (*fun_ptr)(int) = fun; // & removed

	fun_ptr(10); // * removed

	return 0;
}
```

Output
```
Value of a is 10
```

4. Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers.

5. Function pointer can be used in place of switch case. For example, in below program, user is asked for a choice between 0 and 2 to do different tasks.

```c
#include <stdio.h>
void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 15, b = 10;

	printf("Enter Choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n");
	scanf("%d", &ch);

	if (ch > 2) return 0;

	(*fun_ptr_arr[ch])(a, b);

	return 0;
}
```

```
Enter Choice: 0 for add, 1 for subtract and 2 for multiply
2
Multiplication is 150
```

6. ike normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.
For example, consider the following C program where `wrapper()` receives a `void fun()` as parameter and calls the passed function.

```c
// A simple C program to show function pointers as parameter
#include <stdio.h>

// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
	fun();
}

int main()
{
	wrapper(fun1);
	wrapper(fun2);
	return 0;
}
```
This point in particular is very useful in C. In C, we can use function pointers to avoid code redundancy. For example a simple [qsort()](http://www.cplusplus.com/reference/cstdlib/qsort/) function can be used to sort arrays in ascending order or descending or by any other order in case of array of structures. Not only this, with function pointers and void pointers, it is possible to use qsort for any data type.

```c
// An example for qsort and comparator
#include <stdio.h>
#include <stdlib.h>

// A sample comparator function that is used
// for sorting an integer array in ascending order.
// To sort any array for any other data type and/or
// criteria, all we need to do is write more compare
// functions. And we can use the same qsort()
int compare (const void * a, const void * b)
{
return ( *(int*)a - *(int*)b );
}

int main ()
{
int arr[] = {10, 5, 15, 12, 90, 80};
int n = sizeof(arr)/sizeof(arr[0]), i;

qsort (arr, n, sizeof(int), compare);

for (i=0; i<n; i++)
	printf ("%d ", arr[i]);
return 0;
}
```

Output
```
5 10 12 15 80 90
```

Similar to `qsort()`, we can write our own functions that can be used for any data type and can do different tasks without code redundancy. Below is an example search function that can be used for any data type. In fact we can use this search function to find close elements (below a threshold) by writing a customized compare function.

```c
#include <stdio.h>
#include <stdbool.h>

// A compare function that is used for searching an integer
// array
bool compare (const void * a, const void * b)
{
return ( *(int*)a == *(int*)b );
}

// General purpose search() function that can be used
// for searching an element *x in an array arr[] of
// arr_size. Note that void pointers are used so that
// the function can be called by passing a pointer of
// any type. ele_size is size of an array element
int search(void *arr, int arr_size, int ele_size, void *x,
		bool compare (const void * , const void *))
{
	// Since char takes one byte, we can use char pointer
	// for any type/ To get pointer arithmetic correct,
	// we need to multiply index with size of an array
	// element ele_size
	char *ptr = (char *)arr;

	int i;
	for (i=0; i<arr_size; i++)
		if (compare(ptr + i*ele_size, x))
		return i;

	// If element not found
	return -1;
}

int main()
{
	int arr[] = {2, 5, 7, 90, 70};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 7;
	printf ("Returned index is %d ", search(arr, n,
							sizeof(int), &x, compare));
	return 0;
}
```

Output
```
Returned index is 2
```
The above search function can be used for any data type by writing a separate customized compare().

### Source

- [Geeksforgeeks](https://www.geeksforgeeks.org/function-pointer-in-c/)
![Logo](data:image/png;base64,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)