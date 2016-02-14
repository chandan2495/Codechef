#include<bits/stdc++.h>

using namespace std;
int main(){
	int t,n,a[100010],count=0,max=0,alt=0;
	scanf("%d",&t);
	while(t--){
		count=max=0;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			count=1;alt=0;
			if(a[i+1]>=a[i])
				alt=0;
			else
				alt=1;			
			for (int j = i+1; j < n-1; ++j){
				if(alt==0&&a[j]<=a[j+1])
					count++,alt=1,count+=(j+1==n-1?1:0);
				else if(alt==1&&a[j]>=a[j+1])
					count++,alt=0,count+=(j+1==n-1?1:0);							
			}
			max=max>count?max:count;
		}
		printf("%d\n", max);
	}
	return 0;
}