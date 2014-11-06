#include<stdio.h>

int main()
{
int t,n,m,d,h[600],i,j;

scanf("%d",&t);

while(t--)
{
 scanf("%d%d%d",&n,&m,&d);

 for(i=0;i<n;i++){
 scanf("%d",&h[i]);
  if(h[i]>d)
  {
   while(h[i]>0)
   {
    h[i]-=d;
    if(h[i]>0)
    m--;
    else
        break;
   }
  }
 }
 if(m<=0)
 printf("YES\n");
 else
 printf("NO\n");
}

return 0;
}
