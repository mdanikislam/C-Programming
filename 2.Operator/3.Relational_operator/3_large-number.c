#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("Large nubmer is = %d",num1);
    }
    else if(num1<num2)
    {
        printf("Large number is: %d",num2);
    }
    else
    printf("Numbers are equal");
}