#include<stdio.h>
#include<string.h>

int p[1000010];
int main()
{
int t,n,l[101],s[101],roll,s1,e1,flag=0,i,j,r,dice,ls;
int turn;
scanf("%d",&t);
while(t--)
{
 memset(l,0,sizeof(l));
 memset(s,0,sizeof(s));
 flag=0;
 scanf("%d%d%d",&n,&ls,&roll);
 for(i=0;i<n;i++)
    p[i]=1;

 for(i=0;i<ls;i++)
 {
  scanf("%d%d",&s1,&e1);
  if(s1>e1)
    s[s1]=e1;
  else
    l[s1]=e1;
 }
 turn=0;
 for(r=0;r<roll;r++)
 {
  scanf("%d",&dice);
  if(flag==0){
  p[turn]+=dice;
  if(l[p[turn]]>0){
   p[turn]=l[p[turn]];
  }
  else if(s[p[turn]]>0){
   p[turn]=s[p[turn]];
  }
  if(p[turn]==100)
   flag=1;

   turn=(turn+1)%n;
  }
 }

 for(i=0;i<n;i++)
 printf("Position of player %d is %d.\n",i+1,p[i]);
}

return 0;
}
