#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
typedef long long ll;

ll sum=0;
int n=0;

void getSubStringSum(string s,int start) {
	string currStr = "";
	if (start==n)
		return;
	for(int i = start; i < n;i++) {
		currStr+=s[i];
		sum+=atoi(currStr.c_str());
		if(sum>1000000007)
			sum%=mod;
	}
	getSubStringSum(s,start+1);
}

int main() {
	string s;
	int i;
	cin>>s;
	n=s.length();	
	getSubStringSum(s,0);
	printf("%lld\n",sum%mod);
	return 0;
}