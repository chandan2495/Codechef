#include <stdio.h>

#define eps 0.000001
int n,p;
double p1,q1,memo[1000010];
double calc(int n1,double res)
{
    //printf("%d %lf\n",n1,res);
	if(n1==n)
		return res;
    if(n1>n)
        return 0.0f;
	else{
        if(memo[n1]==-1.0f){
        if(memo[n1+2]==-1.0f)
        memo[n1+2]=calc(n1+2,res*p1);
        if(memo[n1+3]==-1.0f)
        memo[n1+3]=calc(n1+3,res*q1);
		return memo[n1]=memo[n1+2]+memo[n1+3];
		}
		else
        return memo[n1];
	}
}

int main()
{
    int i;
    double res=1;
    scanf("%d%d",&n,&p);
    p1=(p/100.0);
    q1=(1.0-p1);
    for(i=0;i<=n;i++)
        memo[i]=-1.0;
    if(n==1)
    printf("%.6lf\n",0);
    else if(n==2)
    printf("%.6lf\n",p1);
    else if(n==3)
    printf("%.6lf\n",q1);
    else
    printf("%.6lf\n",calc(0,res));
    return 0;
}
