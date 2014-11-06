#include<stdio.h>

int main()
{
int n,m,i,a[10010]={0},x,y,flag=0;
scanf("%d%d",&n,&m);

for(i=0;i<m;i++)
{
    scanf("%d%d",&x,&y);
    if(a[y]==0)
        a[y]++;
    else
        flag=1;
}
if(n==m+1&&flag==0)
printf("YES\n");
else
printf("NO\n");

return 0;
}
