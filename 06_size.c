// c program that find the size of int, float, double, char
// @mdanikislam

#include<stdio.h>
int main(){
    int i;
    float f;
    double d;
    char c; 
    // here we use sizeof operator for get the size of keywords ?
    printf("The size of float is - %d bytes\n", sizeof(f));    // float  = 4 bytes
    printf("The size of double is - %d bytes\n", sizeof(d));   // double = 8 bytes
    printf("The size of integer is - %d bytes\n", sizeof(i));  // int    = 4 byets
    printf("The size of character is - %d bytes", sizeof(c));  // char   = 1 bytes

};
