#include<stdio.h>
#include<string.h>
typedef long long ll;
long long memo[10][205];
int coin[7]={1,2,5,10,50,100,200};
ll change(ll i,ll n)
{
    if(n==0)
        return 1;
    if(i==7||n<0)
        return 0;
    if(memo[i][n]==-1)
        memo[i][n]=change(i+1,n)+change(i,n-coin[i]);
    return memo[i][n];
}

int main()
{
    int i,j;
for(i=0;i<10;i++){
    for(j=0;j<=201;j++){
        memo[i][j]=-1;}}
printf("%lld\n",change(0,200));
return 0;
}

/*
5 - 9
10 - 129
*/
