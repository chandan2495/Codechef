#include<stdio.h>

int main()
{
int t,n,a[100010],i,res=0,ones=0;

scanf("%d",&t);

while(t--)
{
res=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
res=a[i]==1?res+1:res;
}
if(res%2==0)
printf("0\n");
else
printf("%d\n",res);

}

return 0;
}
