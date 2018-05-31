#include<stdio.h>
#include<iostream>

using namespace std;
int ans=0;
int getClosedSum(int a[],int n,int k, int sum, int currIndex) {
	int sum1=0;
	if(currIndex==n || sum==k)
		return sum;	
	for(int i=currIndex;i<n;i++)
	{
		if((sum+a[i]) <= k)
			ans=max(sum+a[i],getClosedSum(a,n,k,sum+a[i],i));
	}
	return ans;	
}

int main() {
	int t,n,k,i,a[10000];
	scanf("%d",&t);
	while(t--) {
		ans=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);		
		printf("%d\n", getClosedSum(a,n,k,0,0));
		// printf("ans %d\n", ans);
	}
	return 0;
}