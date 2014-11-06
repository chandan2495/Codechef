#include<stdio.h>
#include<math.h>

int main()
{
int t,b,ls;
double r1,r2;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&b,&ls);

 printf("%lf %lf\n",sqrt(abs((b*b)-(ls*ls))),sqrt(b*b+ls*ls));
}
return 0;
}
