#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

vector< vector<int> > adjlist(10101);
bool visited[10101];

bool isCyclic(int u,int parent)
{
    int i;
    visited[u]=true;
    for(i=0;i<adjlist[u].size();i++)
    {
        if(!visited[adjlist[u][i]])
        {
            if(isCyclic(adjlist[u][i],u))
                return true;
        }
        else if(adjlist[u][i]!=parent)
            return true;
    }
    return false;
}

int main()
{
int n,m,a,b,i;

scanf("%d%d",&n,&m);

for(i=0;i<m;i++){
scanf("%d%d",&a,&b);
adjlist[a].push_back(b);
adjlist[b].push_back(a);
}

for(i=1;i<=n;i++)
    visited[i]=false;

for(i=1;i<=n;i++){
    if(!visited[i]&&isCyclic(i,-1))
    break;
}
if(i==n+1)
printf("YES\n");
else
printf("NO\n");
return 0;
}
