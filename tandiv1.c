#include<stdio.h>
#include<limits.h>

struct pair{
int a;
int b;
};

struct pair p1[600],p2[600];

int main()
{
int t,n,k,p,i,j,flag=0,min1,max1,min2,max2;
scanf("%d",&t);
while(t--)
{
    flag=0;
 scanf("%d%d%d",&n,&k,&p);

 for(i=0;i<k;i++)
 {
  scanf("%d%d",&p1[i].a,&p1[i].b);
 }
 for(i=0;i<p;i++)
 {
  scanf("%d%d",&p2[i].a,&p2[i].b);
 }
for(i=0;i<k;i++)
{
    for(j=0;j<p;j++)
    {
        if(p1[i].a<=p2[j].a)
            break;
    }
    if(j==p){
        flag=1;
        break;
    }
}

 if(flag==0)
 printf("Yes\n");
 else
 printf("No\n");
}

return 0;
}
