#include<stdio.h>
#include<math.h>
int main()
{
    double x=5.99999;
    double result = trunc(x);
    printf("trunc(%lf) = %lf\n",x,result);
}