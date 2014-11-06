#include<stdio.h>

int main(){

int a,b,c,d,max1,max2,ca=1;

while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
{
 if(a>=b)
 max1=a,max2=b;
 else
    max1=b,max2=a;
 if(c>=max1)
 max2=max1,max1=c;
 else if(c>=max2)
    max2=c;
 if(d>=max1)
 max2=max1,max1=d;
 else if(d>=max2)
    max2=d;
 printf("Case %d: %d\n",ca,max1+max2);
 ca++;
}
return 0;
}
