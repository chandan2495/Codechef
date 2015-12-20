#include<stdio.h>

typedef struct a2{
 int p;
 int c;
}a1;

a1 a[100010];
int main()
{

int t,x,y,k,n,i;

scanf("%d",&t);
while(t--)
{
scanf("%d%d%d%d",&x,&y,&k,&n);
for(i=0;i<n;i++)
scanf("%d%d",&a[i].p,&a[i].c);
if((x-y)>0){
for(i=0;i<n;i++)
{
 if(a[i].p>=(x-y)&&a[i].c<=k)
 break;
}
if(i==n)
printf("UnluckyChef\n");
else
printf("LuckyChef\n");
}
else
{
 printf("UnluckyChef\n");
}
}

return 0;

}
