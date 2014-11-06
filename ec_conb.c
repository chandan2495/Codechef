#include<stdio.h>

int a[1001000],sum;

int count(int n)
{
    int count1=0;
    while(n)
    {
        n=n>>1;
        count1++;
    }
    return count1;
}

int cal(int n,int p)
{
 if(n==0)
 return 0;
 else
 {
  cal(n/2,p-1);
  sum+=n%2?pow(2,p):0;
  //printf("%d %d\n",n%2,p);
  return sum;
 }
}

int main()
{
int n,i,temp;
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("\n\n\n");
for(i=0;i<n;i++)
{
    sum=0;
 if(a[i]%2==0)
 {
   temp=count(a[i]);
   //printf("count %d \n",temp);
  a[i]=cal(a[i],temp-1);
 }
 printf("\n%d\n",a[i]);
}

return 0;
}
