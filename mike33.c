#include<stdio.h>
#include<string.h>

int a[41][30001],b[20001];
int n,m,k[41],c,i,j,l,max,count;

int accept_offer(int i)
{
    if(i==m)
        return 0;
    else
    {
        if(include(i))
            return 1;
        else{
        for(j=0;j<k[i];j++)
            b[a[i][j]]=0;
            return 0;
        }

        return max(accept_offer(i+)))
    }
}
int main()
{
scanf("%d%d",&n,&m);
j=0;
for(i=0;i<m;i++)
{
 scanf("%d",&k[i]);
 for(j=0;j<k[i];j++)
 {
  scanf("%d",&c);
  a[i][j]=c;
 }
}
max=accept_offer(0);
printf("%d\n",max);
return 0;
}
