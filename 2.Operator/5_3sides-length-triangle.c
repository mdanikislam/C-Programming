// Write a program to determine the area of ​​the length of 3 sides of a triangle
// area = sqrt(s*(s-a)*(s-b)*(s-c))
// s = (a+b+c)/2
// @mdanikislam

#include<stdio.h>
#include<math.h>
int main()
{
   double a, b,c ,s, area;
   printf("Enter three nubmer : ");
   scanf("%lf %lf %lf",&a, &b, &c);

   s =(a+b+c)/2;
   area = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area of triangle = %lf",area);

}