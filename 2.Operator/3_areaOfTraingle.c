// Write a program that calculate the area of triangle
// @mdanikislam

#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter base : ");
    scanf("%f",&base);

    printf("Enter height : ");
    scanf("%f",&height);

    area = 0.5 * base * height;
    printf("The area of triangle is = %.2f",area);
}