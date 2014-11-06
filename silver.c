#include<stdio.h>

int count(int n)
{
 int count=0;
 while(n)
 {
 count++;
 n=n>>1;
 }
 return count-1;
}
int main()
{
int n;

scanf("%d",&n);
while(n!=0)
{
 printf("%d\n",count(n));
 scanf("%d",&n);
}
return 0;
}
