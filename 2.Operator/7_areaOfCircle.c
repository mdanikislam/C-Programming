// Write a program to find area of circle
// area = 3.1416 * radius * radius
// @mdanikislam

#include<stdio.h>
int main()
{
    float radius, area;
    printf("Enter radius : ");
    scanf("%f",&radius);

    area = 3.1416 * radius * radius;
    printf("Area of circle %.2f\n",area);
}