#include<stdio.h>

int main()
{
int n,m,a[300][300],count=0,i,j;
scanf("%d%d",&n,&m);

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++){
    scanf("%d",&a[i][j]);
    if(a[i][j]==1)
    count++;
    }
}
printf("%d\n",count);
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++){
    if(a[i][j]==1)
    printf("%d %d %d %d\n",i+1,j+1,i+1,j+1);
    }
}

return 0;
}
