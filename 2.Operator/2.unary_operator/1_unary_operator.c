/*  unary operator + = unary plus,
                   - = unary minus, 
                  ++ = unary increment, 
                  -- = decrement */
// @mdanikislam

// *** unary plus *** 
#include<stdio.h>
int main()
{
   int x=10;
   int result = +x;
   printf("%d\n",result);
   return 0;
}

// *** unary minus *** 
/* #include<stdio.h>
int main()
{
   int x=10;
   int result = -x;
   printf("%d\n",result);
   return 0;
}
// Output: -10 */

// *** unary increment *** 
/* #include<stdio.h>
int main()
{
    int x=10;
    int y = ++x; 
    printf("x = %d\n",x);
    printf("y = %d\n",y);
} */


//*** unary decrement ***
/* #include<stdio.h>
int main()
{
    int x=10;
    int y = x++; 
    printf("x = %d\n",x);
    printf("y = %d\n",y);
} */