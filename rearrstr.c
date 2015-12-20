#include<stdio.h>
#include<string.h>
int main()
{
int t,a[26],i,j,turn=0,k=0,flag=0;
char s[100001],s1[100010];
scanf("%d",&t);
while(t--)
{
flag=0;turn=0;flag=0;
memset(s1,'\0',sizeof(s1));
memset(s,'\0',sizeof(s1));
for(i=0;i<26;i++)
 a[i]=0;

 scanf("%s",s);
 i=0;
 while(s[i])
 {
  a[s[i]-'a']++;
  i++;
 }
 j=0;
 for(i=0;i<26;i++)
 {
  turn=0;
  if(a[i]>1){
   while(a[i]>0){
    if(turn%2==0){
     s1[j++]=i+'a';
      a[i]--;
      turn++;
     }
    else
    {
     k=i+1;
     while(a[k]==0&&k!=i)
      k=(k+1)%26;
     if(k==i){
      flag=1;
      break;
      }
      else
      {
       s1[j++]=k+'a';
       a[k]--;
       turn++;
      }
    }
   }
  }
  if(flag==1)
   break;
 }

 if(flag==1)
    printf("-1\n");
 else{
    for(i=0;i<26;i++)
    {
        if(a[i]==1)
            s1[j++]=i+'a';
    }
    printf("%s\n",s1);
 }
}

return 0;

}
