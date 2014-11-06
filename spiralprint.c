#include<stdio.h>

int main()
{
/*write your code here*/
int m,n,i,j,a[10][10],l,p,r,c;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 scanf("%d",&a[i][j]);
 }
}

for(l=0,p=0,r=m-1,c=n-1;l<=r&&p<=c;l++,p++,r--,c--)
{
 for(i=p;i<=c;i++)
   printf("%d ",a[l][i]);
 for(i=l+1;i<=r;i++)
   printf("%d ",a[i][c]);
 for(i=c-1;i>=p;i--)
   printf("%d ",a[r][i]);
 for(i=r-1;i>=l+1;i--)
   printf("%d ",a[i][p]);
}
    return 0;
}
