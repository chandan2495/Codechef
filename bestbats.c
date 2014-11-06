#include<stdio.h>

int compare(int *a,int *b)
{
    return *b-*a;
}

int countbits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
int t,count=0,a[12],i,j,k,maxsum=0,curr;

scanf("%d",&t);
while(t--)
{
maxsum=0;
for(i=0;i<11;i++)
scanf("%d",&a[i]);

scanf("%d",&k);
qsort(a,11,sizeof(int),compare);

for(i=0;i<k;i++)
maxsum+=a[i];
count=0;
for(i=0;i<=2047;i++)
{
curr=0;
 if(countbits(i)==k){
 for(j=0;j<11;j++)
 {
  if((i>>j)&1)
  curr+=a[j];
  if(curr>maxsum)
  break;
 }
 if(curr==maxsum){
 count++;
 }
 }
}

printf("%d\n",count);
}

return 0;
}
