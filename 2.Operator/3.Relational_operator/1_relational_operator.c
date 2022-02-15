// Controll statement - conditional controll statement, loop controll statement
// conditional controll statement - if-else, swithch
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    if(num%2==0)
    printf("Even\n");

    if(num%2 != 0) // or only use else
    printf("Odd");
}