#include<stdio.h>

//void f(); /* Argument list is not mentioned */

int main()
{
   f(2); /* Poor style in C, invalid in C++*/
   getchar();
   return 0;
}

void f(int x)
{
   printf("%d", x);
}
