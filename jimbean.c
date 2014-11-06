#include<stdio.h>

int abss(int a)
{
 return a>0?a:-a;
}

int main()
{
int t,a0x1,a0y1,a1x2,a1y2,b1x3,b1y3,b0x4=0,b0y4=0;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d%d%d%d%d",&a0x1,&a0y1,&a1x2,&a1y2,&b1x3,&b1y3);

 if(abss(b1x3)==abss(b1y3)||b1x3==0||b1y3==0)
 {
     if(a0x1<=b1x3&&a1x2>=b0x4&&a0y1<=b1y3&&a1y2>=b0y4)
        printf("NO\n");
     else
        printf("YES\n");
 }
 else
 printf("NO\n");
}

return 0;
}
