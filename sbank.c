#include<stdio.h>

typedef long long ll;
struct acc{
int cd;
int cb;
ll co;
int count;
};

int main()
{
 int t,n,i,c,spaces=0,*temp;
 char s[100];
 struct acc a[100100],b[100100];
 scanf("%d",&t);
 while(t--)
 {
  //bzero(&a,sizeof(a));
  memset(a,0,sizeof(a));
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {spaces=0;
  while((c=getchar())<33);
  while(c!='\n')
  {
      if(c==32)
        spaces++;
      if(spaces==0)
        temp=&a[i].cd;
      else if(spaces==1)
        temp=&a[i].cb;
      if(c!=32)
      {
          if(spaces>1)
            a[i].co=a[i].co*10+c-'0';
          else
            *temp=*temp*10+c-'0';
      }
  }
}

qsort(a,n,sizeof(struct acc),compare);

j=0;
for(i=0;i<n;i++)
{
    if(a[i]==a[i+1])
}

 }
 return 0;
}
