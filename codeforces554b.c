#include<stdio.h>

int main()
{
int n,count[110],i,j,count1,res=0,max=0,prev;
char s[110][110];

scanf("%d\n",&n);

for(i=0;i<n;i++)
{
    count1=0;
    for(j=0;j<n;j++){
    scanf("%c",&s[i][j]);
    if(s[i][j]=='0')
        count1++;
    }
    count[i]=count1;
    getchar();
}
/*for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%c",s[i][j]);
    }
    printf("\n");
}
*/
res=0;max=0;prev=0;
for(j=0;j<n;j++)
{
    for(i=0;i<n;i++)
    {
     if(count[i]!=0){
      if(s[i][j]=='0')
        s[i][j]='1',count[i]--;
      else
        s[i][j]='0',count[i]++;
      if(count[i]==0)
        res++;
     }
     else
        res++;
    }
    if(res>max)
        max=res;
    if(max==n)
        break;
    if(prev>res)
    {
      for(i=0;i<n;i++)
      {
      if(s[i][j]=='0')
        s[i][j]='1',count[i]--;
      else
        s[i][j]='0',count[i]++;
      }
      res=prev;
    }
    prev=res;
}
printf("%d\n",max);

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%c",s[i][j]);
    }
    printf("\n");
}
return 0;
}
