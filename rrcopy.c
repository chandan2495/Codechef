#include<stdio.h>
#include<string.h>

int main()
{
int t,n,d,h[100010],a[100010],min,max,i,mini,j;
scanf("%d",&t);
while(t--)
{
    memset(h,0,sizeof(h)); j=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
 scanf("%d",&d);
 if(h[d])
    continue;
 h[d]=1;
 a[j++]=d;
}

printf("%d\n",j);
}

return 0;
}
