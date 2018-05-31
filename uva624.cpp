#include<bits/stdc++.h>

using namespace std;
int n,t,min1=INT_MAX,ans[25];

int getMaxDuration(int a[],int t,int i,int currArr[]) {	
	// printf("t %d\n", t);
	if (t<0)
		return 0;
	if (t<min1) {
		min1=t;		
		for (int i = 0; i < n; ++i)
		{
			ans[i] = currArr[i];
		}
	}
	if(i==n)
		return 0;
	currArr[i]=1;	
	getMaxDuration(a,t-a[i],i+1,currArr);
	currArr[i]=0;
	getMaxDuration(a,t,i+1,currArr);
}

int main(int argc, char const *argv[])
{
	int a[25],i,j,sum=0,currArr[25];
	while(scanf("%d%d",&t,&n)!=-1) {
		min1=INT_MAX;
		j=0;sum=0;
		memset(ans, 0 , sizeof(ans));
		memset(currArr, 0 , sizeof(currArr));
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		getMaxDuration(a,t,0,currArr);
		for (int i = 0; i < n; ++i)
		{
			if(ans[i]!=0)
				printf("%d ", a[i]);
		}		
		printf("sum:%d\n", t-min1);
	}
	return 0;
}