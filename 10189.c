#include<stdio.h>
#include<string.h>

int main()
{
int n,m,a[500][500],i,j,count=0,c,index=1,mines=0;

while(scanf("%d%d",&n,&m)&&n&&m)
{
    getchar();
    if(count>0)
        printf("\n");
    memset(a,0,sizeof(a));
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
  scanf("%c",&c);
  if(c=='*')
  a[i][j]=-1;
  else
  a[i][j]=0;
  }
  getchar();
}
for(i=0;i<n;i++)
 for(j=0;j<m;j++){
  if(a[i][j]==0)
  {
      mines=0;
   if(i-1>=0&&a[i-1][j]==-1)
   mines++;
   if(j-1>=0&&a[i][j-1]==-1)
   mines++;
   if(i+1<n&&a[i+1][j]==-1)
   mines++;
   if(j+1<m&&a[i][j+1]==-1)
   mines++;
   if(i-1>=0&&j-1>=0&&a[i-1][j-1]==-1)
   mines++;
   if(i-1>=0&&j+1<m&&a[i-1][j+1]==-1)
   mines++;
   if(i+1<n&&j-1>=0&&a[i+1][j-1]==-1)
   mines++;
   if(i+1<n&&j+1<m&&a[i+1][j+1]==-1)
   mines++;
   a[i][j]=mines;
  }
}

printf("Field #%d:\n",index);
index++;
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
 if(a[i][j]==-1)
 printf("*");
 else
 printf("%d",a[i][j]);

 if(j==m-1)
    printf("\n");
 }
 }
count++;
}
return 0;
}
