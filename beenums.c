#include<stdio.h>

int main()
{
int n,temp,i;

scanf("%d",&n);

while(n!=-1)
{
 temp=1;i=1;
 while(temp<n)
 {
  temp+=6*i;
  i++;
 }
 if(temp==n)
 printf("Y\n");
 else
 printf("N\n");
 scanf("%d",&n);
}

return 0;
}
