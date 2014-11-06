#include<stdio.h>
int& fun()
{
   int a = 10;
   return a;
}

int main()
{
int a;

fun()=a;
printf("%d",fun());
}
