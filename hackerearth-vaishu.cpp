#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &a, int n) {
	bool isDown = false, isUp = false;
	bool isFirstUp = false;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == -1) {
			isDown = true;
		} 
		if (a[i] == 1) {
			isUp = true;
		}
		if (a[i] == 1 && !isFirstUp) {
			isFirstUp = true;
		}
		if (isFirstUp && a[i] == -1) {
			return false;
		}
	}
	return isDown && isUp;
}

void getMinCount(vector<int> &a, int n, int curr, int count, int &min1) {
	if (curr==n) {
		if (check(a,n)) {
			min1 = min(count, min1);
		}
		return;
	}	
	if (curr>0&&a[curr-1]==1 && a[curr]==-1) 
		return;
	a[curr] = a[curr] == -1? 1: -1;
	getMinCount(a,n,curr+1, count+1, min1);
	a[curr] = a[curr] == -1? 1: -1;
	getMinCount(a,n,curr+1, count, min1);
}

int main()
{
	int t,n,temp, min1;
	vector<int> a;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n); a.clear();
		min1 = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&temp);
			a.push_back(temp);			
		}
		getMinCount(a,n,0,0,min1);
		printf("%d\n", min1);
	}
	return 0;
}
