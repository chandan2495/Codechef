#include<stdio.h>
#include<math.h>

#define eps 0.000001
int main()
{
int h,m;
double angle,ha,ma;
while(scanf("%d:%d",&h,&m)&&(h!=0||m!=0))
{
 ha=30*h+(0.5)*m;
 ma=6*m;
 angle=fabs(ha-ma);
 if((angle-180)>eps)
 angle=360-angle;
 printf("%.3lf\n",angle);
}

return  0;
}
