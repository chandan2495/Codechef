#include<stdio.h>
#include<math.h>
#include<string.h>

typedef unsigned long long ll;

ll pro[1600002]={0};
int main()
{
int t,n,i,j,temp,temp1,temp2,count1,temp3,k;
ll count=0;

scanf("%d",&t);
for(i=0;i<=1600000;i++)
    pro[i]=2;
pro[1]=1;
    temp=1600000/2;
for(i=2;i<=temp;i++)
{

    count=0;
    for(j=i*2;j<=1600000;j=j+i)
    {
        pro[j]++;
    }
}
for(i=2;i<=1600000;i++)
    pro[i]+=pro[i-1];
while(t--)
{
    count=0;
scanf("%d",&n);
temp1=n-1;
for(i=1;i<n;i++)
{
    temp2=(n-i)*i;

    temp2--;
    count1=0;
//for(j=temp2;j>=1;j--)
//count1+=pro[j];
count1=pro[temp2];
count+=count1;
}
printf("%llu\n",count);
}

return 0;
}
