#include <stdio.h>
int main()
{
    int length;
    printf("please input the length!");
    scanf("%d\n",&length);
    int array[length];

    for(int i =0;i<length;i++)
    {
        printf("input");
        scanf("%d\n",array[i]);
    }

    for(int j =0;j<length;j++)
    {
        printf("%d\n",array[i]);
    }
}