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

int main() {
	vi a;
	int n,currSize=0,temp;
	while(scanf("%d",&n)!=EOF) {
		a.push_back(n);
		nth_element(a.begin(), a.begin()+ a.size()/2, a.end());
		currSize++;
		if (a.size()%2!=0)
			printf("%d\n", a[a.size()/2]);
		else{
			temp = a[a.size()/2];
			nth_element(a.begin(), (a.begin()+ (a.size()/2)-1) , a.end());
			printf("%d\n", (temp + a[(a.size()/2)-1])/2);
		}
	}
	return 0;
}