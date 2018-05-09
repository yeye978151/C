#include <stdio.h>
double ToStore(double a[],double b[],double c[]);
double every_Average(double a[], double b[], double c[]);
double Average();
double show();

double ToStore(double a[], double b[], double c[])
{
    double all[3][5];
    int i,j;
   for(i = 0;i < 5;i++)
   {
       all[0][i] = a[i];
       all[1][i] = b[i];
       all[2][i] = c[i];
   }
}
