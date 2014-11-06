#include<stdio.h>

int compare(int *a,int *b)
{
return *a-*b;
}

int main()
{
int t,n,i,j,a[10001];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
//qsort(a,n,sizeof(int),compare);

for(i=0;i<n;)
{
 if(a[i]!=0){
 if((a[i]-a[i+1])!=0)
 break;
 a[i]=a[i+1]=0;
 i=i+2;
 }
 else
    i++;
}
if(i>n-1&&a[n-1]==0)
printf("YES\n");
else
    printf("NO\n");
}
return 0;
}

