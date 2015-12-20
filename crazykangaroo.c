#include <stdio.h>

typedef long long ll;
int main()
{
    int t;
    ll a,b,m,count=0,temp;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%lld%lld%lld",&a,&b,&m);
    	temp=a+(m-(a%m));
    	printf("%lld %lld %lld\n",b-temp,m,(b-temp)%m);
    	if((b-temp)>0)
    	printf("%lld\n",((b-temp)/m)+1);
    	else
    	printf("0\n");
    }
    return 0;
}
