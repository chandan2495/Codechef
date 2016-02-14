#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,a[55],b[55],k1,temp,k;
	ll c,m,j,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k1);
		ans=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}			
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&b[i]);
		}			
		for (int i = 0; i < n; ++i)
		{			
			m=abs(a[i]-b[i]);
			if(m>k1)
				c=0;		
			else if(m==k1)
				c=ans==0?1:0;
			else{
				c=1;
				k=m;
				m=k1;
				k=(k>m/2)?(m-k):k;
				for(j=1;j<=k;j++){
					c*=(m-j+1);
					c/=j;
					if(c>mod)
						c=c%mod;
				}
			}
			ans+=c;
			// printf("c %lld\n",c);
			// printf("ans %lld\n",ans);
			if(ans>mod)
				ans=ans%mod;
		}
		printf("%lld\n",ans%mod);
	}
	return 0;
}