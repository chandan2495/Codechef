#include<stdio.h>

int main()
{
int n,i,j,par1,par2,count=0;
scanf("%d",&n);
while(n--){
count=0;
scanf("%d%d",&i,&j);
par1=i,par2=j;
while(par1!=par2)
{
 if(par1>par2)
 {
 par1=par1>>1;
 count++;
 }
 if(par2>par1)
 {
 par2=par2>>1;
 count++;
 }
}
printf("%d\n",count);
}
return 0;
}
