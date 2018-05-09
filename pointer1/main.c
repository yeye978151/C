#include <stdio.h>
#include <malloc.h>

int minus(double array[],int length)
{

    int min = array[0];
    int max = array[0];
    int i = 0;
    for(i = 0;i <length ;i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
        if(max < array[i])
        {
            max = array[i];
        }
        /*else
        {
            continue;
        }*/
    }
    return (max - min);
}
int main()
{
    /*int length;
    printf("please input the length:");
    scanf("%d,",&length);
    double *arr = (double *)(sizeof(double) * length);*/

    double a[100];
    printf("please input the number you like  ");
    int i = 0;
    while(scanf("%lf",&a[i])== 1)
    {
        i++;
    }
    double temp;
    temp = minus(a,i);
    printf("%lf",temp);
}