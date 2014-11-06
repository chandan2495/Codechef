#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int deg[101]={0};
vector< vector<int> > out(101);
vector< vector<int> > in(101);

int find(int n)
{
    int index,i;
    for(i=1;i<=n;i++)
    {
     if(deg[i]==0){
            deg[i]=-1;
        return i;
     }
    }
    return 0;
}

int main()
{
int n,m,a,b,i,j,t,count=0;

scanf("%d%d",&n,&m);

for(i=0;i<m;i++)
{
scanf("%d%d",&a,&b);
deg[a]=b;
for(j=0;j<b;j++)
{
 scanf("%d",&t);
 out[a].push_back(t);
 in[t].push_back(a);
}
}

while(count<n)
{
 res=find(n);
 printf("%d ",res);
 for(i=0;i<in[res].size();i++)
 {
     deg[in[res][i]]--;
 }
}
printf("\n");
return 0;
}
