#include<stdio.h>

int main()
{
int t,n,k,a[100010],i,j,b[100010];

scanf("%d",&t);
while(t--)
{
 scanf("%d",&n);
 for(i=0,j=n-1,k=0;k<n;k++)
 {
  if(k%2!=0){
  a[k]=i;
  b[i]=k;
  i++;
  }
  else{
  a[k]=j;
  b[j]=k;
  j--;
  }
 }
 scanf("%d",&k);
 printf("%d\n",b[k]);
}

return 0;
}
