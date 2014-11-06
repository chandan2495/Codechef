#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<bool> pr(10000001,true);
vector<int> a(1000000);
int main()
{
int t,n,i,j,temp,v,te,count;
scanf("%d",&te);
pr[0]=pr[1]=false;

temp=sqrt(10000001);
for(i=2;i<=temp;i++)
{
    if(pr[i])
    {
    for(j=i*i;j<10000001;j+=i)
        pr[j]=false;
    }
}
j=0;
for(i=0;i<10000001;i++)
{
    if(pr[i])
        a[j++]=i;
}
while(te--)
{
    scanf("%d",&n);
    count=0;
    for(i=0;a[i]<=n;i++)
    {
        if(n%a[i]==0)
            count++;
    }


    printf("%d\n",i-count);
}

return 0;
}
