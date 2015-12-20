#include<stdio.h>

int main()
{
int t,a,b,s,d;
scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&s,&d);
 if(s>=d&&(s-d)%2==0){
 if((s-(s-d)/2)>(s-d)/2)
 a=(s-(s-d)/2),b=(s-d)/2;
 else
    b=(s-(s-d)/2),a=(s-d)/2;
 printf("%d %d\n",a,b);
 }
 else
 printf("impossible\n");
}
return 0;
}
