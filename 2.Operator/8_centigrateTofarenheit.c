// write a program centigrade to farenheit
// F = (c * 1.8) + 32 
// @mdanikislam

#include<stdio.h>
int main()
{
    float c, F;
    printf("Enter centrigrade : ");
    scanf("%f",&c);

    F = (c * 1.8) + 32;
    printf("Farenheit = %.1f", F);
}