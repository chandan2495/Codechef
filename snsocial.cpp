#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int , int> pii;
typedef vector< pii > vii;

#define mk_pr(a,b) make_pair(a,b)
#define loop(i,n) for(i=0;i<n;i++)
#define all(c) c.begin(), c.end()
#define iter(container, it) \
		for(typeof(container.begin()) it = container.begin(); it!=container.end(); it++)
#define sortdesc(v) sort(all(v),greater<int>())
#define sortasc(v) sort(all(v))
#define reverse(v)	reverse(all(v))
#define max_element(v) max_element(all(v))
#define min_element(v) min_element(all(v))
#define accumulate(v,sum) accumulate(all(v), sum)	// sum of all elements in a vector
#define count(v,n) count(all(v), n)	// count all occurrences
#define find(v,x) find(all(v), x)	// find an element in a vector (points to last if not found)
#define binary_search(v, x) binary_search(all(v), x)
#define lower_bound(v,x) lower_bound(all(v),x)	// iterator for first element lesser than x
#define greater_bound(v,x) greater_bound(all(v),x)	// iterator for first element greater than x
#define next_permutation(v) next_permutation(all(v))
#define prev_permutation(v) prev_permutation(all(v))
int gcd(int a,int b) { return b?gcd(b,a%b):a; }
int max(int a, int b) { return a>b?a:b; }

int main() {
	vvi dist, w;
	int t,n,m,temp,max1,res=0;
	bool isEqual=false; 
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&m);
		dist.clear(); w.clear();isEqual=true;
		w.assign(n, vector<int>(m,0)); max1 = 0;res=0;
		dist.assign(n, vector<int>(m,100000));
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				scanf("%d",&w[i][j]);
				max1 = max(max1,w[i][j]);
				if (w[i][j]!=w[0][0]) 
					isEqual = false;
			}
		}
		if (!isEqual) {
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					if (w[i][j]==max1) {			
					// printf("----- %d %d\n", i,j);			
						for (int up = i; up >=0; --up)
						{							
							// if (up!=i&&dist[up][j] < abs(i-up)) 
							// 	break;
							dist[up][j] = min(dist[up][j], abs(i-up));
						}
						for (int down = i; down <n; ++down)
						{
							// if (down!=i&&dist[down][j] < abs(down - i)) 
							// 	break;
							dist[down][j] = min(dist[down][j] ,abs(down-i));
						}
						for (int left = j; left >=0; --left)
						{							
							// if (left!=j&&dist[i][left] < abs(j-left)) 
							// 	break;
							dist[i][left] = min(dist[i][left] ,abs(j-left));
						}
						for (int right = j; right <m; ++right)
						{
							// if (right!=j&&dist[i][right] < abs(right-j)) 
							// 	break;
							dist[i][right] = min(dist[i][right] ,abs(right-j));
						}
						for (int right = j, up=i; right <m && up>=0; ++right, up--)
						{
							// if (i!=up&&j!=right&&dist[up][right] < abs(right-j)) 
							// 	break;
							dist[up][right] = min(dist[up][right] ,abs(right-j));
						}
						for (int left = j, up=i; left>=0 && up>=0; --left, up--)
						{
							// if (i!=up&&j!=left&&dist[up][left] < abs(left-j)) 
							// 	break;
							dist[up][left] = min(dist[up][left] ,abs(left-j));
						}
						for (int right = j, down=i; right <m && down<n; ++right, down++)
						{
							// if (i!=down&&j!=right&&dist[down][right] < abs(right-j)) 
							// 	break;
							dist[down][right] = min(dist[down][right] ,abs(right-j));
						}
						for (int left = j, down=i; left>=0 && down<n; --left, down++)
						{							
							// if (i!=down&&j!=left&&dist[down][left] < abs(left-j)) 
							// 	break;
							dist[down][left] = min(dist[down][left] ,abs(left-j));
						}

					}
				}
			}
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					// printf("%d ", dist[i][j]);
					if (dist[i][j]!=100000)
						res=max(res, dist[i][j]);
				}
				// printf("\n");
			}
		}
		printf("%d\n", res);
	}
	return 0;
}