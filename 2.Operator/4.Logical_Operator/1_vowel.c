// logical AND = &&
// logical OR = || 
// logical NOT = !
// Enter a letter to check vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("The Character is Vowel");
    }
    else
    printf("The Character is Consonant");
}