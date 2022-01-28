// Write a program that takes two integer and display sum
// @mdanikislam

#include<stdio.h>
int main()
{
    int num1, num2, sum;
    float avg;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);

    sum = num1 + num2;
    printf("The sum is = %d\n",sum);
    avg = (float)sum/2;
    printf("The average is = %.2f\n",avg);
}
