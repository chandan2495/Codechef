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
	int s,b,a[100010],i,j,l,r,lnb[100010],rnb[100010],left,right;
	while(scanf("%d%d",&s,&b)&& s && b) {
		memset(a,0,sizeof(a));
		lnb[0]=-1;
		rnb[0] = 1;
		rnb[s-1] = -1;
		for(i=1;i<s;i++) {
			lnb[i] = i-1;
			if(i<s-1)
				rnb[i] = i+1;
		}
		for(i=0;i<b;i++) {
			scanf("%d%d",&l,&r);
			l--; r--;
			// printf("\nLeft array\n");
			// for(j=0;j<s;j++) 
			// 	printf("%d ", lnb[j]);
			// printf("\nRight array\n");
			// for(j=0;j<s;j++) 
			// 	printf("%d ", rnb[j]);
			left = lnb[l];
			while(left!=-1 && a[left]==-1)
				left = lnb[left];
			right = rnb[r];
			while(right!=-1 && a[right]==-1)
				right = rnb[right];
			for(j=l;j<=r;j++) {
				a[j]=-1;
				lnb[j] = left;
				rnb[j] = right;
			}		
			if (left!=-1)
				printf("%d ", left+1);
			else
				printf("* ");
			if (right!=-1)
				printf("%d\n", right+1);
			else
				printf("*\n");
		}
		printf("-\n");
	}
	return 0;
}