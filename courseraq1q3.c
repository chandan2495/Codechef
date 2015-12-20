#include<stdio.h>

int a[502][502],n;

long long res=0;

int find_min(int s[502],int d[502])
{
 int i,min=9999999,v=0;
 for(i=1;i<=n;i++)
 {
  if(s[i]==0&&min>d[i])
  {
   // printf("%d %d\n",s[i],d[i]);
   min=d[i];
   v=i;
  }
 }
 res=res+(long long)min;
 return v;
}

int main()
{
int e,i,j,u,v,w;
int s[502]={0},d[502];
scanf("%d%d",&n,&e);

for(i=0;i<e;i++)
{
scanf("%d%d%d",&u,&v,&w);
a[u][v]=w;
a[v][u]=w;
}
/*
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    printf("%d ",a[i][j]);
    }
printf("\n");
}*/

for(i=1;i<=n;i++)
d[i]=9999999;

d[1]=0;
while(1)
{
 u=find_min(s,d);
 s[u]=1;
 //printf("u%d\n",u);
 /*for(i=1;i<=n;i++)
 printf("%d ",d[i]);
 printf("\n");*/
 for(i=1;i<=n;i++)
 {
  if(a[u][i]!=0&&s[i]==0&&d[i]>a[u][i]){
  d[i]=a[u][i];
  //printf("%d\n",d[i]);
  }
 }
 for(i=1;i<=n;i++){
 if(s[i]==0)
 break;
 }
 if(i==n+1)
 break;
}
printf("%lld\n",res);

return 0;
}
