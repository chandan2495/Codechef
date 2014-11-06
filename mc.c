#include<stdio.h>
#include<string.h>

int n,m;
char s1[2010],s2[2010],mem[1011][1011]={0};
int max(int a,int b)
{
    return a>b?a:b;
}


int mincost(int i,int j)
{
if(i==0||j==0)
    return 0;
if(mem[i][j]!=-1)
    return mem[i][j];
else
{
    mem[i][j]=(s1[i-1]==s2[j-1]?1+mincost(i-1,j-1):max(mincost(i-1,j),mincost(i,j-1)));
    return mem[i][j];
}
}

int main()
{
    int res;
scanf("%s",&s1);
while(s1[0]!='#')
{
scanf("%s",&s2);
memset(mem,-1,sizeof(mem));
n=strlen(s1);
m=strlen(s2);
res=mincost(n,m);
//printf("%d ",res);
printf("%d\n",15*(n-res)+30*(m-res));
scanf("%s",&s1);
}

return 0;
}
