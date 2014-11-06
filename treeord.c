#include<stdio.h>

int main()
{
 int n,pre[9000],i,post[9000],in[9000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&pre[i]);
 for(i=0;i<n;i++)
 scanf("%d",&post[i]);
 for(i=0;i<n;i++)
 scanf("%d",&in[i]);

 if(pre[0]==post[n-1])
 printf("yes\n");
 else
 printf("no\n");

 return 0;
}
