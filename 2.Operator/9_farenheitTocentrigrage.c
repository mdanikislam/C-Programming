// write a program to convert farenheit to centrigrage
// c = (F-32)/1.8
// @mdanikislam

#include<stdio.h>
int main ()
{
    float c, F;
    printf("Enter farenheit : ");
    scanf("%f",&F);

    c = (F-32)/1.8;
    printf("Centrigrade : %.2f",c);
}