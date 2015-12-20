#include<bits/stdc++.h>

#define inf -21483620
using namespace std;
int t,m,c,k,p,max1=0;
vector<int> price[20];
int memo[202][22];

int shop(int money,int g)
{
    if(money<0)
    return inf;
    else if(g==c){
    return m-money;
    }
    else{
    int i,res=0;
    if(memo[money][g]==-1){
    for(i=1;i<=price[g][0];i++){
        if(price[g][i]<=money)
            memo[money-price[g][i]][g+1]=res=shop(money-price[g][i],g+1);
     max1=res>max1?res:max1;
    }
    memo[money][g]=max1;
    }
    else{
            res=memo[money][g];
        max1=res>max1?res:max1;
    }
    return max1;
    }
}

int main()
{
int i,j,res=0;

scanf("%d",&t);
while(t--)
{
scanf("%d%d",&m,&c);
max1=0;
memset(memo,-1,sizeof(memo));
for(i=0;i<c;i++)
{
 scanf("%d",&k);
 price[i].clear();
 price[i].push_back(k);
 for(j=0;j<k;j++)
 {
    scanf("%d",&p);
    price[i].push_back(p);
 }
}
res=shop(m,0);
if(res!=0)
printf("%d\n",res);
else
printf("no solution\n");
}

return 0;
}
