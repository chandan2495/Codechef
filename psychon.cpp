#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
int p[1000001];
int main()
{
int t,n,i,j,codd,ceven;
int count,n1,temp,k;
vector<bool> isprime(10000011,true);

scanf("%d",&t);
k=0;
temp=sqrt(10000010);
isprime[0]=isprime[1]=false;
isprime[2]=true;
for(i=3;i<=temp;i+=2)
{
 if(isprime[i])
 {
     //p[k++]=i;
     for(j=i*i;j<=10000000;j+=i)
        isprime[j]=false;
 }
}
p[k++]=2;
for(i=3;i<=8000;i+=2)
{
    if(isprime[i])
        p[k++]=i;
}

while(t--)
{
    codd=ceven=count=0;
scanf("%d",&n);
//temp=sqrt(n);
for(i=0;p[i]<=n&&i<k;i++)
{
    count=0;
    while(n%p[i]==0)
    {
        n/=p[i];
        count++;
    }
    if(count!=0){
           // printf("%d %d\n",p[i],count);
    if(count%2==0)
        ceven++;
    else
        codd++;
    }
}
if(n!=1)
    codd++;
//printf("%d %d\n",ceven,codd);
if(ceven>codd)
printf("Psycho Number\n");
else
printf("Ordinary Number\n");
}
return 0;
}
