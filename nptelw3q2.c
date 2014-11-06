#include<stdio.h>

int power(int x, int y);

int main()
{
/*write your code here*/
int n,x,a[100],i,res=0,j;
scanf("%d%d",&n,&x);

for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
j=n;
for(i=0;i<=n;i++)
{
    res+=a[i]*power(x,j);
    j--;
}
printf("%d",res);
    return 0;
}



int power(int x, int y)
{
   int result = x,i;

   if(y == 0) return 1;
   if(x < 0 || y < 0) return 0;

   for(i = 1; i < y; ++i)
   result *= x;
   return result;
}
