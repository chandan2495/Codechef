#include<stdio.h>

int n,a[50010];
int maxx(int a,int b)
{
    return a>b?a:b;
}
int max(int a,int b,int c)
{
    return maxx(maxx(a,b),c);
}
int stockcal(int i,int shares,int earn,int spent)
{
 if(i==n)
    return earn-spent;
 return max(stockcal(i+1,shares,earn,spent),stockcal(i+1,shares+1,earn,spent+a[i]),stockcal(i+1,0,earn+(a[i]*shares),spent));
}
int main()
{
int t,i;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("%d\n",stockcal(0,0,0,0));
}

return 0;
}
