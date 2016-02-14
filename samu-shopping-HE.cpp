#include<iostream>
#include<limits.h>
#include<stdio.h>

using namespace std;
typedef long long ll;
ll min1,memo[100010][3];
int n;

ll getMinAmount(int a[][3],int prev,int curr,ll sum){	
	ll ans;
	if(curr==n)
		return sum;
	if(memo[curr][prev]==-1){
		for (int i = 0; i < 3; ++i)
		{
			if(prev!=i&&memo[curr][i]==-1){
				ans=getMinAmount(a,i,curr+1,sum+a[curr][i]);			
				min1=ans>min1?min1:ans;
			}		
		}
		memo[curr][prev]=min1;
	}
	return  memo[curr][prev];		
}

int main(){
	int t,a[100010][3];
	ll ans;
	scanf("%d",&t);
	while(t--){
		min1=INT_MAX;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
			memo[i][0]=memo[i][1]=memo[i][2]=-1;
		}
		for(int i=0;i<3;i++){
			ans=getMinAmount(a,i,1,a[0][i]);
			min1=ans>min1?min1:ans;
		}
		printf("%lld %lld %lld\n", memo[1][0],memo[1][1],memo[1][2]);
	}
	return 0; 
}