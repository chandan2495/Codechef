#include<stdio.h>

typedef long long ll;
int compare(int *a,int *b)
{
    return *a-*b;
}
int main()
{
int t,k,i,m[100010];
ll sum=0,summis=0,res,x,temp,n;

scanf("%d",&t);
while(t--)
{
 scanf("%lld%d",&n,&k);
 for(i=0;i<k;i++)
 scanf("%d",&m[i]);
 qsort(m,k,sizeof(int),compare);

 sum=summis=0;
 x=1;
 if(k>0){
 for(i=0;i<k;i++)
 {
  temp=(m[i]-1);
  sum=(temp*(temp+1))/2LL;
  sum-=summis;
  if(m[i]>sum){
   break;
   }
  summis+=m[i];
 }

 if(i==k){
 sum=(n*(n+1)/2LL)-summis;
 sum++;
 }
 else
    sum=m[i];
 }
 else{
    sum=(n*(n+1)/2LL);
    sum++;
 }
 if(sum%2==0)
 printf("Mom\n");
 else
 printf("Chef\n");
}

return 0;
}
