#include<stdio.h>

int main()
{
int t,k,n,i,j;

scanf("%d",&t);
while(t--)
{
i=0,j=0;
 scanf("%d%d",&n,&k);

 if(k==1&&n==1)
 printf("1\n");
 else if(k==1)
    printf("1\n");
 else if(k>(n/2))
 printf("-1\n");

 else
 {
  for(i=2,j=0;i<=n&&j<=k;i++)
  {
    if(i%2==0){
            if(j!=k-1){
    printf("%d ",i);
            j++;
            }
    else
        break;
    }
  }
  printf("%d",i);
  printf("\n");
 }
}
return 0;
}
