#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> ii;
typedef vector< pair<int, ii> > vii;

vii edges;
int n;
int pSet[100010];
ll sum=1;
int findSet(int i){
    return pSet[i]==i?i:(pSet[i]=findSet(pSet[i]));
}

void unionSet(int i,int j){
        int pari=findSet(i);
        int parj=findSet(j);
        if(pari!=parj){
        pSet[pari]=parj;       
        }
}

bool isSameSet(int i,int j){
    return findSet(i)==findSet(j);
}

bool compare(const pair<int,ii> &a, const pair<int,ii> &b){
	return a.second.second<b.second.second;
}

int main(){
	int t,m,u,v,w;
	sum=0;
	edges.clear();
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
        pSet[i]=i;                      
    }
	for (int i = 0; i < m; ++i)
	{
		scanf("%d%d%d",&u,&v,&w);
		edges.push_back(make_pair(u, make_pair(v,w)));
		// unionSet(u,w);
		// unionSet(v,w);
	}
	sort(edges.begin(),edges.end(),compare);
	for (vector< pair<int,ii> >::iterator i = edges.begin(); i != edges.end(); ++i)
	{
		printf("Before %d %d %d\n", i->first,i->second.first,i->second.second);							
		if(!isSameSet(i->first,i->second.first)){
			unionSet(i->first,i->second.first);
		}
		else{
			sum++;
			printf("deleted %d %d %d\n", i->first,i->second.first,i->second.second);							
		}
	}			
	printf("%lld\n",sum);
	return 0;
}