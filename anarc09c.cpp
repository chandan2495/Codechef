#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<string.h>
using namespace std;
int abs(int a)
{
    return a>0?a:-a;
}
int main()
{
int n1,n2,i,j,k,p[5000],a[5000],ord=0,dis=0;
int count,a1[5000],cas=1,temp,n3,n4;
vector<bool> isprime(1000010,true);

isprime[0]=isprime[1]=false;
temp=sqrt(1000100);k=0;
for(i=2;i<=temp;i++)
{
    if(isprime[i])
    {
        p[k++]=i;
        for(j=i*i;j<=1000000;j+=i)
            isprime[j]=false;
    }
}
for(i=0;i<k;i++)
printf("%d\n",p[i]);

scanf("%d%d",&n1,&n2);
while(n1!=0||n2!=0)
{
    n3=n1,n4=n2;
    ord=0,dis=0;
    memset(a,0,sizeof(a));
    memset(a1,0,sizeof(a1));
    for(i=0;p[i]<=n1&&i<k;++i)
    { count=0;
        while(n1%p[i]==0)
        {
            n1/=p[i];
            count++;
        }
        if(count!=0)
            a[p[i]]=count;
    }
    if(n1!=1)
        ord++,dis++;

    for(i=0;p[i]<=n2&&i<k;++i)
    { count=0;
        while(n2%p[i]==0)
        {
            n2/=p[i];
            count++;
        }
        if(count!=0){
                //printf("%d %d\n",p[i],n2);
            a1[p[i]]=count;
        }
    }
    //printf("kkkkkk%d\n",k);
    if(n2!=1&&n1!=n2)
        ord++,dis++;
        for(i=2;i<2000;i++)
        {
            //printf("%d %d\n",i,a1[i]);
            if(a[i]!=0||a1[i]!=0){
                    //printf("%d %d\n",i,a[i]);
                ord++;
                dis+=abs(a[i]-a1[i]);
            }
        }
     if(n3==0||n4==0){
        ord--,dis--;
     }
     printf("%d. %d:%d\n",cas,ord,dis);
     cas++;
     scanf("%d%d",&n1,&n2);
}

return 0;
}
