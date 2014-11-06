#include<stdio.h>
#include<string.h>

int main(){
int n,a[100002],b[100002],i;
while(1)
{
scanf("%d",&n);
if(n==0)
    break;
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
b[a[i]]=i;
}

for(i=1;i<=n;i++)
{
 if(a[i]!=b[i])
 break;
}
if(i==n+1)
printf("ambiguous\n");
else
printf("not ambiguous\n");
}

return 0;
}
