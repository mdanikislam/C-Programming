// C program to conversion lowercar to uppercase without use library function
#include<stdio.h>
int main(){
    char lower;
    printf("Enter lower case :");
    scanf("%c",&lower);

    //  upper case and lower case difference 32 . If A= 65 , a=97 diff= 97-65 = 32
    printf("The Upper case is = %c", lower-32);
}