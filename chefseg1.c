#include<stdio.h>
#include<math.h>

typedef long long ll;
int t,x,i;

double rec(ll temp)
{
    if(temp==2)
        return x/4.0;
    else
        return rec(temp>>1)/2.0;
}
int main()
{

ll k,temp;
double res,l,r,temp1,temp3;
scanf("%d",&t);
while(t--)
{
scanf("%d%lld",&x,&k);

if(k==1)
printf("%lf\n",x/2.0);
else
{
    i=(int)log2l(k);
    //printf("i %d\n",i);
    temp=(ll)pow(2,i);

    temp1=rec(temp);
       // printf("pow %lf\n",temp1);
    res=temp1;
    if((k&(k-1))!=0){
    temp3=(k-temp)*2*temp1;
   // printf("pow %lf\n",temp3);
    res=(temp3+(temp3+2*temp1))/2.0;

    }
    printf("%lf\n",res);
}
}
return 0;
}
