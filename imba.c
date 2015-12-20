#include<stdio.h>

int main()
{
int t,n,i,j,a[100010],k,turn;

scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
turn=0;
k=n;
i=1,j=n;
for(k=n;k>0;k--)
{
  if(turn==0)
    a[k]=j,j--;
  else
    a[k]=i,i++;
  turn=!turn;
}

for(i=1;i<=n;i++)
    printf("%d ",a[i]);
printf("\n");

}
return 0;
}
