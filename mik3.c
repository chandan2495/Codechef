#include<stdio.h>
#include<math.h>
#include<string.h>

int n,m,a[21][20001],b[20001],k[41],c[40][40];
int counts(int i)
{
    int count=0;
    while(i>0)
    {
        count+=(i&1);
        i=i>>1;
    }
    return count;
}

int main()
{
    int i,j,l,count,max,flag,c,temp;
scanf("%d%d",&n,&m);
j=0;
for(i=0;i<m;i++)
{
 //   t[i].k=getint();
 scanf("%d",&k[i]);
 for(j=0;j<k[i];j++)
 {
  //   c=getint();
  scanf("%d",&c);
  a[i][j]=c;
 }
}

temp=pow(2,m);
max=0;
for(i=0;i<=temp;i++)
{
    count=0; flag=0;
    memset(b,0,sizeof(b));
 for(j=0;j<m;j++)
 {
     if(counts(i)>max){
  if(i&1<<j)
  {
      for(l=0;l<k[j];l++)
      {
          if(b[a[j][l]]==0)
            b[a[j][l]]=1;
          else
            break;
      }
      if(l==k[j])
        count++;
     else{
            flag=1;
        break;
     }
  }
}
else{
    flag=1;
    break;
}
 }
 if(flag==0&&count>max)
    max=count;
}

printf("%d\n",max);
return 0;
}
