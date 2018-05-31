#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int t,n,a[100010],h[100010],result;	
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);result=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			h[i] = 0;
			h[a[i]-1]+=1;
		}
		for (int i = n-2; i >=0; --i)
		{
			h[i]+=h[i+1];
		}
		for (int i = 0; i < n; ++i)
		{
			if (h[i]==0)
				result++;
		}
		printf("%d\n", result);
	}
	return 0;
}