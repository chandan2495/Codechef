#include<stdio.h>

int main()
{
int n,i,j,a[500002],res;

scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

res=a[0];
for(i=1;i<n;i++)
res=res^a[i];

printf("%d\n",res);

return 0;
}
