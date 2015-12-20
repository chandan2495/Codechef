#include<stdio.h>

int main()
{
int i,j,k,temp,a,b,c;

for(i=3;i<1001;i++)
{
 for(j=i+1;j<1001;j++)
 {
  if(i+j<1000){
  k=1000-(i+j);
  if(k<j)
  c=j,b=k,a=i;
  else
  c=k,b=j,a=i;
  if(((a*a)+(b*b))==(c*c)){
        printf("jkfksafklj %d %d %d\n",a,b,c);
  break;
  }
  }
  else
    break;
 }
}
printf("%d %d %d\n",a,b,c);
return 0;
}
