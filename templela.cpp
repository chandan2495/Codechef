#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int t,n,a[1000];
	bool isValid = false;
	scanf("%d",&t);
	while(t--) {
		isValid = true;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		if (n%2!=0&&a[0]==1&&a[n-1]==1) {
			for (int i = 1; i <= n/2; ++i)
			{
				if (a[i]-a[i-1]!=1) {
					isValid = false;
					break;
				}
			}
			if (isValid) {
				for (int i = n/2; i < n-1; ++i)
				{
					if (a[i]-a[i+1]!=1) {
						isValid = false;break;
					}
				}
				if (isValid)
					printf("yes\n");
				else
					printf("no\n");
			} else {
				printf("no\n");
			}		
		} else {
			printf("no\n");
		}
	}
	return 0;
}