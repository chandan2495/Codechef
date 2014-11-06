#include<stdio.h>

int main()
{
int n,m,a[100][100],count=0,i,j,p[100][100];
scanf("%d%d",&n,&m);

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    scanf("%d",&p[i][j]);
}

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++){
    scanf("%d",&a[i][j]);
    if(a[i][j]!=0)
    count++;
    }
}
printf("%d\n",count);
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++){
    if(a[i][j]!=0)
    printf("%d %d %d %d %d\n",i+1,j+1,i+1,j+1,p[i][j]-a[i][j]);
    }
}

return 0;
}
