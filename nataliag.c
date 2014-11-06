#include<stdio.h>

int t,m,n,d[101][101]={0},e[101][101]={0},start_i,start_j,i,j,end_i,end_j,flag=0,flag1=0;
char a[101][101];

int min(int a,int b)
{
return a<b?a:b;
}
int maze(int i,int j)
{
 if(i>(m-1)||j>(n-1)||a[i][j]=='*')
 return 0;
 if(a[i][j]=='#')
 return 1;
 e[i][j]=1;
  if(j>0&&e[i][j-1]==0&&(a[i][j-1]=='O'||a[i][j-1]=='#')){
  d[i][j-1]=d[i][j-1]==0?(d[i][j]+1):min(d[i][j]+1,d[i][j-1]);
  maze(i,j-1);}

  if((j+1)<=(n-1)&&e[i][j+1]==0&&(a[i][j+1]=='O'||a[i][j+1]=='#')){
  d[i][j+1]=d[i][j+1]==0?(d[i][j]+1):min(d[i][j]+1,d[i][j+1]);
  maze(i,j+1);}

  if(i>0&&e[i-1][j]==0&&(a[i-1][j]=='O'||a[i-1][j]=='#')){
  d[i-1][j]=d[i-1][j]==0?(d[i][j]+1):min(d[i][j]+1,d[i-1][j]);
  maze(i-1,j);}

  if((i+1)<=(m-1)&&e[i+1][j]==0&&(a[i+1][j]=='O'||a[i+1][j]=='#')){
  d[i+1][j]=d[i+1][j]==0?(d[i][j]+1):min(d[i][j]+1,d[i+1][j]);
   maze(i+1,j);}

e[i][j]=0;

 //return 0;
}

int main()
{
scanf("%d",&t);
while(t--)
{
    flag=0;
    flag1=0;
 for(i=0;i<m;i++){
  for(j=0;j<n;j++){
  d[i][j]=0; e[i][j]=0;}}
 scanf("%d%d\n",&m,&n);
 for(i=0;i<m;i++){
  for(j=0;j<n;j++){
   a[i][j]=getchar_unlocked();
    if(a[i][j]=='$'){
        flag1=1;
    start_i=i; start_j=j;}
     if(a[i][j]=='#'){
    end_i=i; end_j=j;
    flag=1;
    }

    }getchar_unlocked();}
maze(start_i,start_j);
if(d[end_i][end_j]!=0&&flag==1)
printf("%d\n",d[end_i][end_j]);
else if(flag1==0&&flag!=1)
printf("1\n");
else
printf("-1\n");
}
return 0;
}


