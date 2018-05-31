#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int , int> pii;
typedef vector< pii > vii;
typedef vector< pii, int > graph;

#define mk_pr(a,b) make_pair(a,b)
#define loop(i,n) for(i=0;i<n;i++)
#define all(c) c.begin(), c.end()
#define iter(container, it) \
		for(typeof(container.begin()) it = container.begin(); it!=container.end(); it++)

int main(int argc, char const *argv[])
{
	int i;
	string s,res;
	cin>>s;
	while(s[0]!='#') {
		if (next_permutation(all(s)))
			cout<<s<<endl;
		else
			cout<<"No Successor"<<endl;
		cin>>s;
	}
	return 0;
}