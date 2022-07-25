Static memory allocation is locating memory at compile time while Dynamic memory allocation is locating memory at run time. 
In dynamic memory allocation, we use pointers.
In static memory allocation, thespace allocated is only freed after execution of the program.
However, in dynamic memory allocation, the space allocated can be freed during and after execution of the program.
There are three functions used to allocate memory when using dynamic memory allocation. These ar malloc, galloc and realloc.
(MALLOC means memory allocation.)
When using malloc, the pointer returns a void* because no data type has been specified. This gives the user the flexibility of filling the memory allocated bar with data of any type; ie,int,cahr or float.
All data stored using the dynamic memory allocation is stored int the HEAP, which is a huge pool of free memory.
Data stored using the static memory allocation isstored in the stack.
It is always good practice to free the memory after exiting the program. (If using the dynamic memory allocation, freeingof memory can be done at runtime also, not only after exiting the program. In static memory allocation, memory can not be freed unless after exiting the program

funtion of writing the syntax of malloc is :
malloc(size)        for example, malloc(5(size if int)) or mallow(3(size of char))
It is preferd not to allocae the size of mallow directly(say mallow(20) for the first case) since the size of int is determined by the type of machine being used. some machines allocate 2bytes to an int datatype but some allocate 4bytes.Hence, if you allocate 20bytes in a machinewhose int size is 2, then you may endn up wasting space in memory since thw same data size 5 is allocated only 10bytes in such a machine. 
