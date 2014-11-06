#include<stdio.h>

struct pair{
int a;
int b;
};

struct pair p1[600],p2[600];

int compare(struct pair *p1,struct pair *p2)
{
 return (*p1).a-(*p2).a;
}

int main()
{
int t,n,k,p,i,j,flag=0;
scanf("%d",&t);
while(t--)
{
 scanf("%d%d%d",&n,&k,&p);

 for(i=0;i<k;i++)
 {
  scanf("%d%d",&p1[i].a,&p1[i].b);
 }
 for(i=0;i<p;i++)
 {
  scanf("%d%d",&p2[i].a,&p2[i].b);
 }

 flag=0;
 i=0,j=0;
 for(i=0;i<k;i++)
 {
  for(j=0;j<p;j++){
     if(p1[i].a>p1[i].b)
     {
        if(p2[j].a>p2[j].b)
        {
            if((p1[i].a>=p2[j].a)&&(p1[i].b<=p2[j].b))
            break;
        }

     }
     else if((p1[i].a>=p2[j].a)&&(p1[i].b<=p2[j].b))
        break;
     else
        continue;
  }
  if(j==p)
  break;
 }
 if(i==k)
 printf("Yes\n");
 else
 printf("No\n");
}

return 0;
}
