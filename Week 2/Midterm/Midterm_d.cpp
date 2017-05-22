// Answer the following questions:
/*
Clearly and precisely explain in your own words (not acopy/paste from the Internet). Why do you need a copy constructor?
What is the relationship between pointers and arrays? Consider the integer array “int myArray[] = { 2, 4,6};”. Show the syntax of accessing the last element in “myArray” using array index first then using pointers.
*/

// User defined copy constructors are generally needed when we have pointers or some sort of memory allocation, and that is because of the types of copying. Deep copying is only done when ﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿﻿the user defines it, deep copying allows for ﻿﻿﻿﻿﻿﻿﻿﻿the pointers to point to new memory allocations so we dont have residual information.﻿﻿﻿﻿﻿

// The biggest difference with pointers and arrays comes with the memory allocation, arrays are one big block of memory allocated and it is all of the same type, it is also limited by the original size allocation. Where pointers are dynamically allocated and can be resized.

#include <iostream>
using namespace std;

int main() {
    int arr[3]={1,3,4};
    int* ptr = arr;
    cout << *(ptr + 2);
}
