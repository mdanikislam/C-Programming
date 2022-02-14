#include<stdio.h>
#include<math.h> //for sqrt function
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    double result = sqrt(x);
    printf("The route is : %.1lf", result);
}