#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
string s; int n;
int recur(int currIdx, int prevSum) {
	if (currIdx == n) {
		return 1;
	}
	int ans = 0; int val=0;
	for (int i = currIdx; i < n; ++i)
	{
		val+=s[i]-48;
		if (val>=prevSum)
			ans+=recur(i+1, val);
	}
	return ans;
}

int main() {	
	cin>>s; int t=1;
	while(s.compare("bye")!=0) {
		n = s.length();		
		printf("%d. %d\n", t, recur(0,0));
		t++;
		cin>>s;
	}
	return 0;
}