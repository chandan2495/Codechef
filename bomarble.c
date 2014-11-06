#include<stdio.h>

int main()
{
int n,res=0,a[1005]={0},i,temp;
a[1]=5;temp=2;
for(i=2;i<1001;i++)
{
 a[i]+=a[i-1]+5+temp;
 temp+=3;
}

scanf("%d",&n);
while(n!=0)
{
 printf("%d\n",a[n]);
 scanf("%d",&n);
}
return 0;

}
