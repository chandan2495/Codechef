#include<stdio.h>

int main()
{
int t,n,r1,r2,maxout,maxin,inindex,outindex;
int i;
scanf("%d",&t);
while(t--)
{
maxout=maxin=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d%d",&r1,&r2);
 if(maxout<r2)
 maxout=r2,outindex=i+1;
 if(maxin<r1)
 maxin=r1,inindex=i+1;
}
if(maxout>=maxin&&inindex==outindex)
printf("%d\n",inindex);
else if(maxout<maxin)
printf("%d\n",inindex);
else
printf("-1\n");
}

return 0;
}
