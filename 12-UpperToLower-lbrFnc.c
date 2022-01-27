// C program to conversion uppercase to lower case using library function
#include<stdio.h>
#include<ctype.h>

int main(){
    char upper, lower;
    printf("Enter any uppercase letter : ");
    scanf("%c",&upper);
     // tolower is a library function 
    lower = tolower(upper);
    printf("The lowercase letter is : %c", lower);
}