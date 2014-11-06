#include<stdio.h>

struct s1{
 int a;
 char str[8];
};
struct s1 s[10021];


int compare(struct s1 *p1,struct s1 *p2)
{
 return (*p1).a-(*p2).a;
}

int main()
{
 int t,n,i,min;
 char *str;
 scanf("%d",&t);
 while(t--)
 {
     str=NULL;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%s%d",s[i].str,&s[i].a);

  qsort(s,n,sizeof(struct s1),compare);
  min=(1<<31)-1;
  for(i=0;i<n;i++)
  {
   if(i==0&&s[i].a!=s[i+1].a)
   {
    if(s[i].a<min){
    min=s[i].a;
    str=s[i].str;
    }
   }
   else if(i==n-1&&s[i].a!=s[i-1].a)
   {
    if(s[i].a<min){
    min=s[i].a;
    str=s[i].str;
    }
   }
   else if(s[i].a!=s[i-1].a&&s[i].a!=s[i+1].a)
   {
      if(s[i].a<min){
    min=s[i].a;
    str=s[i].str;
    }
   }
  }

  if(min!=(1<<31)-1)
  {
      printf("%s\n",str);
  }
  else
    printf("Nobody wins.\n");
 }
 return 0;
}
