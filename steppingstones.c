#include<stdio.h>
#include<math.h>

typedef unsigned long long ll;

int main()
{
int t,count=0;
ll n,temp,res;
scanf("%d",&t);
while(t--)
{
 scanf("%lld",&n);
 temp=sqrtl(n*2);
 res=(temp*(temp+1))/2;
 if(res==n)
   printf("Go On Bob %d\n",temp);
 else
 printf("Better Luck Next Time\n");

}

return 0;
}
