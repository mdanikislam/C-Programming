// C program to conversion decimal to octal
// @mdanikislam

#include<stdio.h>
int main(){
    int number;
    printf("Enter the decimal number :");
    scanf("%d",&number);
    // %o specifier use for octal number
    printf("The octal number is = %o",number);
}