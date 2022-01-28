// @mdanikislam

#include<stdio.h>
int main(){
    //keyword - int, float, double, char 
    int num1 = 100;
    float num2 = 52.2;
    float num4 = 52.568;
    double num3 = 78.166478;
    char ch = 'a';

    // for integer format specifier %d 
    printf("Integer number is %d\n",num1);
    // for float format specifier %f 
    printf("Integer number is %f\n",num2);
    // for fractional number %.2f means it takes 2 number after point.
    printf("Integer number is %.2f\n",num4);
    // for double format specifier %lf 
    printf("Integer number is %lf\n",num3);
    // for character format specifier %c 
    printf("Integer number is %c",ch);
}