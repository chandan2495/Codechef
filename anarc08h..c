#include<stdio.h>

/*
int winner(int n,int k)
{
 if(n==1)
 return 1;
 else
 return (winner(n-1,k)+k-1)%n+1;
}
*/

int winner(int n,int k)
{
    int r=0;
    int i=1;
    while(i<=n)
    {
        r=(r+k)%i;
        i+=1;
    }
    return r+1;
}

int main()
{
int n,d;

scanf("%d%d",&n,&d);
while(n!=0&&d!=0)
{
 printf("%d %d %d\n",n,d,winner(n,d));
 scanf("%d%d",&n,&d);
}
return 0;
}
