#include<stdio.h>
#include<math.h>

typedef long long ll;

int count(int n)
{
 int count1=0;
 while(n)
 {
  count1++;
  n=n&(n-1);
 }

 return count1;
}

int main()
{
int t,n,a[100001],i,temp,temp1,j,flag=0;
ll sum;

scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
temp=pow(2,n);
//printf("check %d\n",count(7));
sum=0;

for(i=0;i<temp;i++)
{
    sum=0; flag=0;
    for(j=0;j<n;j++)
    {
        if((i&(1<<j)))
        {
            sum+=a[j];
            flag=1;
        }
    }
    if(sum%n==0&&flag==1)
    {   //printf("%d\n",sum);
        temp1=count(i);
        printf("%d\n",temp1);
        for(j=0;j<n;j++)
        {
            if((i&(1<<j)))
                printf("%d ",j+1);
        }
     break;
    }
}
printf("\n");
}

return 0;
}
