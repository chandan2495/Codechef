#include<stdio.h>
#include<string.h>

char s[1000],s1[1000];
int n,adj;
int memo[105][105][2];
int countAdj(char s[1000],int i,int count,char c)
{

    if(i==n&&count==adj){
        printf("%s %d %d %c %d\n",s,i,count,c,n);
        return 1;
    }
    if(i==n)
        return 0;
    if(count>adj)
        return 0;
    s[i]=c;
    if(memo[i][count][c-'0']==-1){
          int count1=count+(i>0&&s[i-1]=='1'&&s[i]=='1'?1:0);
    return (memo[i][count][c-'0']=countAdj(s,i+1,count1,'0')+countAdj(s,i+1,count1,'1'));
    }
}

int main()
{
int t,cases=0,res,i,j,k;
scanf("%d",&t);
while(t--)
{
 memset(s,'\0',sizeof(s));
 memset(memo,-1,sizeof(memo));
 scanf("%d%d%d",&cases,&n,&adj);
 res=countAdj(s,0,0,'0')+countAdj(s,0,0,'1');
 printf("%d %d\n",cases,res/2);
}

return 0;
}
