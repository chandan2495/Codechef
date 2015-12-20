#include<stdio.h>
#include<limits.h>

int main()
{
int t,i,j,count=0,c1,c2,c3,temp,ans;
char order[][3]={"rgb","rbg","brg","bgr","gbr","grb"};
char s[100101];
scanf("%d",&t);
while(t--)
{
scanf("%s",s);
ans=INT_MAX;
for(i=0;i<6;i++)
{
c1=c2=c3=temp=0;
 for(j=0;s[j];j++)
 {
  if(s[j]==order[i][0])
  c1++,temp+=c2+c3;
  else if(s[j]==order[i][1])
  c2++,temp+=c3;
  else
  c3++;
 }
 ans=ans>temp?temp:ans;
}

printf("%d\n",ans);
}

return 0;
}
