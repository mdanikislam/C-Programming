// C program that conversion uppercase to lower case using library function
// @mdanikislam

#include<stdio.h>
#include<ctype.h>  // for tolower library function

int main(){
    char upper, lower;
    printf("Enter any uppercase letter : ");
    scanf("%c",&upper);
     // tolower is a library function 
    lower = tolower(upper);
    printf("The lowercase letter is : %c", lower);
}