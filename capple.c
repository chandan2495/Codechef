#include<stdio.h>
#include<string.h>

int main()
{
int t,n,a[100140],i,count,d;

scanf("%d",&t);
while(t--)
{
count=0;
memset(a,0,sizeof(a));
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&d);
if(a[d]==0)
count++;

a[d]=1;
}

printf("%d\n",count);

}

return 0;
}
