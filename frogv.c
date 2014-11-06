#include<stdio.h>
#include<math.h>

int main()
{
int n,p,k,a[100010],reach[100010]={0},i;
scanf("%d%d%d",&n,&p,&k);

for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
    if(i>1&&abs(a[i]-a[i-1])<=k)
    reach[i]=1;
    if(i<n&&abs(a[i+1]-a[i])<=k)
    {
        if(reach[i]==1)
            reach[i]=3;
        else
            reach[i]=2;
    }
}

/*for(i=0;i<n;i++)
printf("%d ",reach[i]);
printf("\n");*/

while(p--)
{
    scanf("%d%d",&p1,&p2);
    while(1)
    {
        if(abs(a[p1]-a[p2])<=k)
            break;
        else if(reach[p2-1])

    }
}

return 0;
}
