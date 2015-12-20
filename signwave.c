#include<stdio.h>
#include<math.h>

#define eps 0.000001
int main()
{
int t,s,c,k,res,count=0,i,j,count1=0,a[10]={0};
double temp1,temp2,x[]={0.0,M_PI/4.0,M_PI/2.0,(3*M_PI)/4.0,M_PI,(5*M_PI)/4.0,(3*M_PI)/2.0,(7*M_PI)/4.0,2*M_PI};
scanf("%d",&t);
while(t--)
{
 scanf("%d%d%d",&s,&c,&k);
 for(i=0;i<10;i++)
    a[i]=0;
 count=0;count1=0;
 for(i=0;i<s;i++)
 {
     for(j=0;j<9;j++)
     {
         temp1=sin(pow(2.0,i)*x[j]);
         //printf("%lf\n",temp1);
         if(temp1>-eps&&temp1<eps){
            a[j]++;
         }
     }
 }

 for(i=0;i<c;i++)
 {
     for(j=0;j<9;j++)
     {
         temp1=cos(pow(2,i)*x[j]);
         if(temp1>-eps&&temp1<eps){
            a[j]++;
         }
     }
 }
 count=0;
 for(i=0;i<10;i++)
 {
     if(a[i]>=k)
        count++;
 }

 printf("%d\n",count);
}

return 0;
}
