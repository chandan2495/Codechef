#include<stdio.h>

int main()
{
 int *p,x=10;
 p=&x;
 printf("%d %d",*&*&*&*&p,p);
}
