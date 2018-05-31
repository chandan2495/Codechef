#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int , ll> pii;
typedef vector< pii > vii;
typedef vector< pii, int > graph;

#define mk_pr(a,b) make_pair(a,b)
#define loop(i,n) for(int i=0;i<n;i++)
#define all(c) c.begin(), c.end()
#define iter(container, it) \
		for(typeof(container.begin()) it = container.begin(); it!=container.end(); it++)

bool compare(const pii &a, const pii &b) {
	return a.second > b.second;
}

int linearSearch(vii v, int n) {
	loop(i,n) {
		if ( v[i].first == n-1) {
			return i;
		}
	}
}

int main() {
	int t,k,n,m,e,idx;
	ll sum=0,ans=0,score;
	vii v;
	scanf("%d",&t);
	while(t--) {
		ans=0;
		scanf("%d%d%d%d",&n,&k,&e,&m);
		loop(i,n-1) {
			sum=0;
			loop(j,e) {
				scanf("%lld",&score);
				sum+=score;
			}
			v.push_back(mk_pr(i, sum));
		}
		sum=0;
		loop(j,e-1) {
			scanf("%lld",&score);
			sum+=score;
		}
		v.push_back(mk_pr(n-1, sum));
		sort(all(v), compare);
		// loop(i, n) {
		// 	printf("%d %d\n", v[i].first , v[i].second);
		// }
		idx = linearSearch(v, n);
		if (idx > k-1) {	// not among k students
			if ((v[k-1].second - sum)+1>m)	// impossible case
				ans = -1;			
			else
				ans = (v[k-1].second - sum)+1LL;
		} else if (v[idx].second==v[k].second) {	// already among k students
			ans = 1;
		} 
		if (ans==-1) 
			printf("Impossible\n");
		else
			printf("%lld\n", ans);
	}
	return 0;
}
