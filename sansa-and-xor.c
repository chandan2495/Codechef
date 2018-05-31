#include<stdio.h>

int main() {
	int n,t,i,a[100010],ans=0;

	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		if(n%2==0)
			printf("0\n");
		else {
			ans=0;
			for(i=0;i<n;i++) 
				ans = ans ^ (i%2?0:a[i]);
			printf("%d\n", ans);
		}
	}
	return 0;
}
