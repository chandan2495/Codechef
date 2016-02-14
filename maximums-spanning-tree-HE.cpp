#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

vii AdjList;

int visited[5010],parent[5010];   //0 for not visited,1 for visited,2 for completed
int flag=0;
int dfs(int u)
{
    visited[u]=1;
    for(int j=0;j<(int)AdjList[u].size();++j)
    {
        int v=AdjList[u][j];
       // printf("Neighbour of %d is %d\n",u,v);
        if(visited[v]==0){
            parent[v]=u;
            dfs(v);
        }
        else if(visited[v]==1&&parent[u]!=v){ //back edge cycle
          //  printf("u %d v%d\n",u,v);
            flag=1;
        }
    }
    visited[u]=2;
}

int main()
{
int t,n,m,i,j,u,v,edges[40100][2],ed;

scanf("%d",&t);
while(t--)
{
    flag=0;
    scanf("%d%d",&n,&m);
    AdjList.assign(n+1, vi());
    //fill(visited.begin(),visited.end(),0);
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&u,&v);
        edges[i][0]=u;
        edges[i][1]=v;
        //AdjList[u].push_back(v);
    }
    for(i=1;i<n;++i){
        visited[i]=0;
        parent[i]=0;
        scanf("%d",&ed);
        AdjList[edges[ed][0]].push_back(edges[ed][1]);
        AdjList[edges[ed][1]].push_back(edges[ed][0]);
      //  printf("sssss%d\n",ed);
    }

    visited[i]=0;
    parent[i]=0;
    //printf("too much\n");
    dfs(1);
    //printf("Flag %d\n",flag);
    if(flag==0) //no cycle
    {
        for(i=1;i<=n;i++){
            if(visited[i]==0||visited[i]==1)
                break;
        }
        //printf("vis %d\n",i);
        if(i==n+1)  //all vertices connected
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
}

return 0;
}
