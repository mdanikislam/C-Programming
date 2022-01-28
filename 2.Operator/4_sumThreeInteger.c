// Write a program that take three number and display their sum and average 
// mdanikislam

#include<stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;
    printf("Enter three number : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1 + num2 + num3;
    printf("The sum is = %d\n",sum);

    avg = (float)sum/3;
    printf("The average is = %.2f:",avg);
}