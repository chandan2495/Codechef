#include<stdio.h>
#include<string.h>

typedef long long ll;

int main()
{
char s[6000];
int n,i;
ll dp[6000];

scanf("%s",&s);

while(s[0]!='0')
{
dp[0]=1;
n=strlen(s);
//printf("%d\n",n);
i=1;
while(s[i])
{
    if(s[i]-'0')
    dp[i]=dp[i-1];
    if(s[i]=='0')
    dp[i]=dp[i-2<0?0:i-2];
    if(s[i-1]=='0'&&s[i]=='0')
        dp[i]=dp[i-1];
    if(s[i]!='0'&&s[i-1]=='2'&&s[i]<='6')
        dp[i]+=dp[i-2<0?0:i-2];
    if(s[i]!='0'&&s[i-1]=='1')
        dp[i]+=dp[i-2<0?0:i-2];

    i++;
}

printf("%lld\n",dp[n-1]);
scanf("%s",&s);
}
return 0;
}
