// write a program to swap two numbers without temporary variable
// @mdanikislam

#include<stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 15;

    num1 = num1-num2; //-5
    num2 = num1+num2; //-5+15=10
    num1 = num2-num1; // 10- (-5)=15
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}