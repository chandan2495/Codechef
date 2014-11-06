#include<stdio.h>
#include<math.h>

typedef long long ll;

ll pro[1600001];
int main()
{
int t,n,i,j,temp,temp1,temp2,count1,temp3,k;
ll count=0;

scanf("%d",&t);
pro[1]=1;
for(i=2;i<=1000001;i++)
{
    temp=sqrt(i);
    count=0;
    for(j=1;j<=temp;j++)
    {
        if(i%j==0)
        {
            if(j==(i/j))
                count++;
            else
                count+=2;
        }
    }
    pro[i]=pro[i-1]+count;
}
while(t--)
{
    count=0;
scanf("%d",&n);
temp1=n-1;
for(i=1;i<n;i++)
{
    temp2=(n-i)*i;
    //printf("%d\n",temp2);
    temp2--;
count1=pro[temp2];

count+=count1;
}
printf("%lld\n",count);
}

return 0;
}
