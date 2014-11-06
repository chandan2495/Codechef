#include<stdio.h>

int countbits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int min(int a,int b)
{
 return a<b?a:b;
}

int main()
{
int t,n,p,c1,c2;
int a,b;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d%d",&n,&a,&b);
 c1=countbits(a);
 c2=countbits(b);
 p=min(c1,n-c2)+min(n-c1,c2);
 printf("%d\n",((1<<p)-1)<<(n-p));
}
return 0;
}
