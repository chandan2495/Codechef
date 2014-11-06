#include<stdio.h>

int main()
{
int t,n,a[100100],min1,min2,i;
scanf("%d",&t);
while(t--)
{
 scanf("%d",&n);
 min1=min2=(1<<31)-1;
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 if(min1>a[i])
 min2=min1,min1=a[i];
 else if(min2>a[i])
 min2=a[i];
 }
 printf("%d\n",min1+min2);
}

return 0;
}
