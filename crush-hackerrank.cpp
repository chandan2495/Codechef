#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll arr[10000001]={0};
int main() {
    int n,m,a,b;
    ll res=0,k;
    scanf("%d%d",&n,&m);
    while(m--) {
    	scanf("%d%d%lld",&a,&b,&k);
    	a--;b--;
    	arr[a]+=k; 
    	if (b+1<n) {
    		arr[b+1]-=k;
    	}
    }	res = arr[0];
    for (int i = 1; i < n; ++i)
    {
    	arr[i]+=arr[i-1];
    	res = max(res, arr[i]);
    }
    printf("%lld\n", res);
    return 0;
}
