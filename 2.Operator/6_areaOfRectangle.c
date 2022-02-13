// write a program to find area fo a rectangle 
// Area of rectangle = length * width 
// @mdanikislam

#include<stdio.h>
int main()
{
    float length, width, area;
    printf("Enter length size: ");
    scanf("%f",&length);

    printf("Enter width size: ");
    scanf("%f",&width);

    area = length * width;
    printf("Area of Rectangle : %.2f", area);
}