#include<stdio.h>
#include<iostream>
#include<limits.h>
#include<string.h>

typedef long long ll;
#define invalid 1000000009
using namespace std;
ll maxx(ll a,ll b) {
	return a>b?a:b;
}
ll getMax(int a[],int n, int j) {
	int i;
	ll curr1=0,max1=INT_MIN;
	for(i=j;i<n;i++) {			
			curr1 = maxx(curr1 + a[i], a[i]);
			max1= maxx(curr1, max1);					
	}
	return max1;
}

int main() {
	int t,n,a[100010],i,max_so_far[100010],curr_so_far[100010];
	ll max1,curr1,temp,temp1;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		curr1 = 0;
		max1 = INT_MIN; 
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
			curr1 = maxx(curr1 + a[i], a[i]);
			curr_so_far[i] = curr1;
			max1= maxx(curr1, max1);
			max_so_far[i] = max1;
		}
		max1 = max_so_far[n-1];
		for(i=0;i<n;i++) {
			if (a[i]<0) {
				temp1 = getMax(a,n,i+1);
				if (i>0) 
					temp1 = temp1 + max_so_far[i-1];
				if (temp1 > max1) 
					max1=temp1; 
			}
		}
		printf("%lld\n", max1); 
	}
	return 0;
}