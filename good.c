#include<stdio.h>

int gcd(int a,int b)
{

return b?gcd(b,a%b):a;
}

int main(){
int t,h,m,s,i,j,bcount,gcount,temp,k,count=0;
int p[]={2,3,5,7,11,13,17,19,23,29};
int a[30]={0},gc[24][60][60]={0},b[30]={0},g[30]={0};
for(i=2;i<30;i++)
{
    for(j=0;j<10;j++)
    {
        if(i==p[j])
            a[i]=1;
    }
}

for(i=0;i<24;i++){
        count=0;
    for(j=0;j<60;j++){
     for(k=0;k<60;k++){
      if(i!=0&&j!=0&&k!=0)
      gc[i][j][k]=gcd(i,gcd(j,k));
      else if(j!=0&&k!=0)
        gc[i][j][k]=gcd(j,k);
      else if(k!=0&&i!=0)
        gc[i][j][k]=gcd(i,k);
      else if(j!=0&&i!=0)
        gc[i][j][k]=gcd(i,j);
      else if(i!=0)
        gc[i][j][k]=i;
      else if(j!=0)
        gc[i][j][k]=j;
        else if(k!=0)
        gc[i][j][k]=k;
        else if(i==0&&j==0&&k==0)
            count++;
      if(a[gc[i][j][k]]==1)
        count++;
     }
    }
    b[i]=count;
    g[i]=3600-count;
}

scanf("%d",&t);
while(t--)
{
bcount=gcount=0;
 scanf("%d%d%d",&h,&m,&s);
 while(h!=24)
 {
    if(gc[h][m][s]==0)
        gcount++;
    else if(a[gc[h][m][s]]==1)
        bcount++;
    else
        gcount++;

    s++;
    if(s>59)
    s=0,m++;
    if(m>59){
    m=0,h++;
    for(;h<=23;h++)
    {
        bcount+=b[h];
        gcount+=g[h];
    }

    }
 }
  //printf("%d::%d\n",gcount,bcount);
 if(bcount!=0&&gcount!=0){
 temp=gcd(bcount,gcount);
 bcount/=temp;
 gcount/=temp;
 }
 printf("%d:%d\n",bcount,gcount);
}

return 0;
}
