#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '

void swap(int *a, int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("%d, %d", a, b);
}


