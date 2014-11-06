#include<stdio.h>
#include<string.h>

typedef long long ll;
ll pairs=0;
void recur(char s[6000],int i,int n)
{
  int n1=0,j,;
  for(j=i;j<n-1;j++){
  n1=s[j]-'0';
  n1=n1*10+s[j+1]-'0';

  if(n1<27){
  pairs++;
  recur(s,i+1,n);
  }
  }
  //printf("%d %d\n",i,n1);


  //recur(s,i+2,n);
  //printf("           %d %d\n",i,n1);

 //return;
}

int main()
{
char s[6000];
int n;

scanf("%s",&s);

while(s[0]!='0')
{
pairs=1;
n=strlen(s);
//printf("%d\n",n);
recur(s,0,n);

printf("%lld\n",pairs);
scanf("%s",&s);
}
return 0;
}
