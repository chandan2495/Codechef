#include<stdio.h>

typedef struct t{
 int s;
 int e;
}t;

t t1[100],t2[100];

int overlap(int a,int b,int c,int d)
{
    if((a>=c&&a<=d)||(c>=a&&c<=b))
        return 0;
    else if((a>c))
        return 1;
    else
        return -1;
}


int main()
{
int p,q,l,r,i,j,k,count=0;

scanf("%d%d%d%d",&p,&q,&l,&r);

for(i=0;i<p;i++)
scanf("%d%d",&t1[i].s,&t1[i].e);

for(i=0;i<q;i++)
scanf("%d%d",&t2[i].s,&t2[i].e);



for(k=l;k<=r;k++)
{
    i=j=0;
 while(i<p&&j<q)
 {
  if(overlap(t1[i].s,t1[i].e,t2[j].s+k,t2[j].e+k)==0){
    count++;
    break;
  }
  else if(overlap(t1[i].s,t1[i].e,t2[j].s+k,t2[j].e+k)==-1){
      i++;
  }
  else if(overlap(t1[i].s,t1[i].e,t2[j].s+k,t2[j].e+k)==1){
      j++;
  }

 }
// printf("%d %d\n",k,count);

}

printf("%d\n",count);

return 0;
}
