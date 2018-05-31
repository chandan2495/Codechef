#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vi;
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
	int t,flag=0,i;
	ll m,k,j,temp,r,c,r1,c1;
	vi a;
	scanf("%d",&t);
	while(t--) {
		a.clear();
		scanf("%lld%lld%lld%lld%lld",&r,&c,&m,&k,&j);		
		a.push_back(m);
		a.push_back(k);
		a.push_back(j);
		if ((r*c)!=(m+k+j)) {
			flag=0;
			r=0;c=0;
		}
		else{
			sort(all(a));		
			do {			
				// loop(i,3) {
				// 	printf("%lld ", a[i]);
				// }
				flag=1;
				r1=r;
				c1=c;
				loop(i,3){ 
					if (r==0 || c==0) {
						flag=0;
						break;
					}
					if (a[i]%r==0 || a[i]%c==0) {
						if (r!=0 && a[i]%r==0) {
							temp = a[i]/r;				
							if (temp <=c)
								c-=temp;
							else {
								flag=0;
								break;
							}
						}
						else if(c!=0) {
							temp = a[i]/c;				
							if (temp <=r)
								r-=temp;
							else {
								flag=0;
								break;
							}
						} 
						else {
							flag=0;
							break;
						}
					}
					else{
						flag=0;
						break;
					}
				}
				// printf("\n");
				// printf("flag %d\n", flag);
				if (flag==1)
					break;			
				r=r1;
				c=c1;		
			} while(next_permutation(all(a)));
		}
		if (flag==1 && (r==0 || c==0))
			printf("Yes\n");
		else
			printf("No\n");
	}	
	return 0;
}