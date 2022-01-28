// C program that conversion lowercase to uppercase using library  function
// @mdanikislam

#include<stdio.h>
#include<ctype.h>  //for toupper library function 
int main(){
    char lower, upper;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("The uppercase letter is = %c", upper);
}