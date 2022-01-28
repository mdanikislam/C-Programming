// C program that conversion octal number to decimal  number.
// @mdanikislam

#include<stdio.h>
int main(){
    int number;
    printf("Enter any octal nubmer: ");
    scanf("%o",&number); // %o for octal specifier
    printf("The decimal number is = %d",number); // %d for decimal specifier
}