#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("This is capital letter");
    else if(ch>='a' && ch<='z')
    printf("This is Small letter");
    else
    printf("This is not a character");
    }`