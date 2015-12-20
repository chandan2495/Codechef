#include<bits/stdc++.h>

#define inf -21483620
using namespace std;
int t,m,c,k,p,max=0;
vector<int> price[20];
int a[202][22]={0};

int shop(int money,int g)
{
    if(money<0)
    return inf;
    else if(g==c-1)
    return m-money;
    else{
    int i,res;
    for(i=0;i<price[g][0];i++){
     res=shop(money-price[g][i],g+1);
     max=res>max?res:max;
    }
    return max;
    }
}

int main()
{
int i,j;

scanf("%d",&t);
while(t--)
{
scanf("%d%d",&m,&c);
max=0;
memset(a,0,sizeof(a));
for(i=0;i<c;i++)
{
 scanf("%d",&k);
 price[i].push_back(k);
 for(j=0;j<k;j++)
 {
    scanf("%d",&p);
    price[i].push_back(p);
 }
}
printf("%d\n",shop(m,0));
}

return 0;
}
