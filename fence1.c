#include<stdio.h>

int main()
{
int l;
double pi=3.141592,res;

scanf("%d",&l);
while(l!=0)
{
 res=(l*l)/(2.0*pi);
 printf("%.2lf\n",res);
 scanf("%d",&l);
}
return 0;
}
