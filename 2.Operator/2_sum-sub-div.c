// Write a program that take two numbers and display sum, sub, multiply, divission % reminder 
// @mdanikislam

#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);

    result = num1 + num2;
    printf("The sum is = %d\n", result);

    result = num1 - num2;
    printf("The sub is = %d\n", result);

    result = num1 * num2;
    printf("The multiply is = %d\n", result);

    result = num1 / num2;
    printf("The division is = %d\n", result);

    result = num1 % num2;
    printf("The reminder is = %d\n", result);

}