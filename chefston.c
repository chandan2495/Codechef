#include <stdio.h>

typedef long long ll;

int main(void) {
	// your code goes here
	ll max=0,t,n,i,k,a[100010],b[100010],temp;
	scanf("%lld",&t);
	while(t--)
	{
     max=0;
     scanf("%lld%lld",&n,&k);
     for(i=0;i<n;i++)
        scanf("%lld",&a[i]);

     for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
        temp=k/a[i];
        max=max>temp*b[i]?max:temp*b[i];
     }


    printf("%lld\n",max);
	}
	return 0;
}

