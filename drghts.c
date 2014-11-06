#include<stdio.h>

int a[50100],p[50100]={0},check[50100]={0};
int main()
{
int n,m,i,j,a1,b1;
long long pair=0,total=0;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}

for(i=0;i<m;i++)
{
scanf("%d%d",&a1,&b1);
if(p[b1]>0&&p[)
p[b1]
 if(a[a1]==1&&a[b1]==1)
 {
  if(check[a1]==0){
  total++;
  check[a1]=1;
  }
  if(check[b1]==0){
  total++;
  check[b1]=1;
  }
 }
}
for(i=1;i<=n;i++)
pair+=p[i];
if(total>0)
printf("%lld %lld\n",pair,total);
else
printf("0 0\n");
return 0;
}
