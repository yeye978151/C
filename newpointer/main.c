#include <stdio.h>


int main()
{
    int length;
    scanf("%d\n",&length);
    int array[length];

    for(int i =0;i<length;i++)
    {
        printf("input");
        scanf("%d\n",array[i]);
    }

    for(int i =0;i<length;i++)
    {
        printf("%d\n",array[i]);
    }
}