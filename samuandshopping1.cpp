#include<iostream>
#include<limits.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef long long ll;
ll min1,dp[100010][3];
int n;

// ll getMinAmount(int a[][3],int prev,int curr,ll sum){	
// 	ll ans;
// 	if(curr==n)
// 		return sum;
// 	if(dp[curr][prev]==-1){
// 		for (int i = 0; i < 3; ++i)
// 		{
// 			if(prev!=i&&dp[curr][i]==-1){
// 				ans=getMinAmount(a,i,curr+1,sum+a[curr][i]);			
// 				min1=ans>min1?min1:ans;
// 			}		
// 		}
// 		dp[curr][prev]=min1;
// 	}
// 	return  dp[curr][prev];		
// }

ll getMinAmount(int a[][3], int currShop, int lastItem, ll sum) {
	// printf("currShop %d lastItem %d value %d sum %lld\n", currShop, lastItem, a[currShop][lastItem], sum);
	if (currShop==n) {
		// printf("ab %lld\n",sum);
		return sum;		
	}
	ll min1=INT_MAX,temp;
	if (dp[currShop][lastItem]==-1 || lastItem==-1) {
		for (int i = 0; i < 3; ++i)
		{
			if (i!=lastItem) {
				// if (dp[currShop][i]==-1)
				temp = getMinAmount(a,currShop+1,i,sum+a[currShop][i]);
				min1 = min(min1,temp); 
			}
		}		
		dp[currShop][lastItem] = min1;
	}
	return dp[currShop][lastItem]; 						
}

int main(){
	int t,a[100010][3]; ll ans,temp;
	scanf("%d",&t);
	while(t--){
		min1=INT_MAX;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
			if (i==0) {
				dp[i][0] = a[i][0];
				dp[i][1] = a[i][1];
				dp[i][2] = a[i][2];
				temp = min(dp[i][0], min(dp[i][1],dp[i][2]));		
			}
		}		
		// ans=getMinAmount(a,0,-1,0);
		for (int i = 1; i < n; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{		
				dp[i][j] = INT_MAX;		
				for (int k = 0; k < 3; ++k)
				{
					if (k!=j) {
						dp[i][j] = min(dp[i][j], dp[i-1][k]);
					}
				}
				dp[i][j]+=a[i][j];
				if (i==n-1) {
					min1 = min(min1, dp[i][j]);
				}
			}			
		}
		if (n==1) min1=temp;
		printf("%lld\n", min1);
	}
	return 0; 
}