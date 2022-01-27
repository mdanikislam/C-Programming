// write a program that take two number and print their sum number 
// @mdanikislam

#include<stdio.h>
int main(){
    int num1;
    int num2; 
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);
    int result= num1+num2;
    printf("The Result is : %d", result);
}