#include<stdio.h>
#include<math.h> //for pow function
// @mdanikislam

int main()
{
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter top number: ");
    scanf("%d",&y);
    double result = pow (x,y);
    printf("result is : %.2lf",result);
}