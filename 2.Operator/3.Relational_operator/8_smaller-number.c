#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&num1, &num2);

    if(num1<num2)
    {
        printf("Smaller number is: %d",num1);
    }
    else if(num2<num1)
    {
        printf("Smaller number is: %d",num2);
    }
    else
    printf("Number is equal");
}