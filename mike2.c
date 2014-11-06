#include<stdio.h>

typedef long long ll;
int compare(int *a,int *b)
{
 return *a-*b;
}
int a[1000001];
int main()
{
int n,i,j,succ,fail;
ll x,task=0;

scanf("%d%lld",&n,&x);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
qsort(a,n,sizeof(int),compare);
task=0;fail=n;
for(i=0;i<n;i++)
{
    task=0;
if(a[i]%2!=0)
task=(a[i]/2)+1;
else
task=(a[i]/2);
if(task>x)
break;
x-=task;
a[i]-=task;
fail--;
}
succ=0;task=0;
for(i=0;i<n;i++)
{
    task=0;
task+=a[i];
if(task>x)
break;

x-=task;
succ++;
}
printf("%d %d\n",fail,succ);
return 0;
}
