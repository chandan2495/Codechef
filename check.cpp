#include<stdio.h>
#include<iostream>
#include<conio.h>
int f(int &x, int c) {
   c  = c - 1;
   if (c == 0) return 1;
   x = x + 1;
   printf("%d %d\n",c,x);
   return f(x, c) * x;
}

int main()
{
    int p=5;
printf("%d\n",f(p,p));
}
