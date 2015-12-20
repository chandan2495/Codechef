#include<stdio.h>

int abs(int a)
{
return a>0?a:-a;
}

int main()
{
int r,x,y,x1,y1,d1,d2,max;

scanf("%d%d%d%d%d",&r,&x,&y,&x1,&y1);

d1=abs(x-x1);
d2=abs(y-y1);

max=d1>d2?d1:d2;

if((d1==0||d2==0)&&(d1!=0||d2!=0))
printf("%d\n",(max/r)-1);
else
    printf("%d\n",max/r);

return 0;

}
