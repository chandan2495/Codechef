#include<stdio.h>
#include<string.h>

int main()
{
int t,n,i,a[100010],count=0,b[100010],max=0;

scanf("%d",&t);
while(t--)
{
max=0;count=0;
memset(b,0,sizeof(b));
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 b[a[i]]++;
 max=b[a[i]]>max?b[a[i]]:max;
}

printf("%d\n",n-max);

}

return 0;
}
