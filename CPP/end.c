#include <stdio.h>
#include <stdlib.h>
#define square(a) a*a

int main(){
int *ptr1 = (int*) calloc(1, sizeof(int));
int *ptr2 = (int*) malloc(sizeof(int));

printf("%d,%d", *ptr1, *ptr2);
free(ptr2);
free(ptr1);
}