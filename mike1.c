#include<stdio.h>

typedef long long ll;
ll max(ll a,ll b)
{
    return a>b?a:b;
}

int a[502][502];
int main()
{
int m,n,l,i,j,x,y;
ll e1,e2;

scanf("%d%d",&m,&n);
for(i=1;i<=m;i++)
{
 for(j=1;j<=n;j++)
 {
  scanf("%d",&a[i][j]);
 }
}
e1=0, e2=0;
scanf("%d",&l);
for(i=0;i<l;i++)
{
 scanf("%d%d",&x,&y);
 if(e1!=-1&&x<=m&&y<=n)
 e1+=a[x][y];
 else
 e1=-1;
 if(e2!=-1&&y<=m&&x<=n)
 e2+=a[y][x];
 else
 e2=-1;
}
printf("%lld\n",max(e1,e2));
return 0;
}
