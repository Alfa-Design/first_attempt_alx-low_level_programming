#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* The prototypes of all your functions and the prototype of the function _putchar */
