#include<iostream>
#include<limits.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef long long ll;
ll min1,memo[100010][3];
int n;

// ll getMinAmount(int a[][3],int prev,int curr,ll sum){	
// 	ll ans;
// 	if(curr==n)
// 		return sum;
// 	if(memo[curr][prev]==-1){
// 		for (int i = 0; i < 3; ++i)
// 		{
// 			if(prev!=i&&memo[curr][i]==-1){
// 				ans=getMinAmount(a,i,curr+1,sum+a[curr][i]);			
// 				min1=ans>min1?min1:ans;
// 			}		
// 		}
// 		memo[curr][prev]=min1;
// 	}
// 	return  memo[curr][prev];		
// }

ll getMinAmount(int a[][3], int currShop, int lastItem, ll sum) {
	// printf("currShop %d lastItem %d value %d sum %lld\n", currShop, lastItem, a[currShop][lastItem], sum);
	if (currShop==n) {
		// printf("ab %lld\n",sum);
		return sum;		
	}
	ll min1=INT_MAX,temp;
	if (memo[currShop][lastItem]==-1 || lastItem==-1) {
		for (int i = 0; i < 3; ++i)
		{
			if (i!=lastItem) {
				// if (memo[currShop][i]==-1)
				temp = getMinAmount(a,currShop+1,i,sum+a[currShop][i]);
				min1 = min(min1,temp); 
			}
		}		
		memo[currShop][lastItem] = min1;
	}
	return memo[currShop][lastItem]; 						
}

int main(){
	int t,a[100010][3]; ll ans;
	scanf("%d",&t);
	while(t--){
		min1=INT_MAX;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
			memo[i][0]=memo[i][1]=memo[i][2]=-1;
		}		
		ans=getMinAmount(a,0,-1,0);
		printf("%lld\n", ans);
	}
	return 0; 
}