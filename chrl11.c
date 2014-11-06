#include<stdio.h>
#include<malloc.h>

typedef long long ll;
struct or
{
 int cost;
 int weight;
 float wc;
};

int compare(struct or *a,struct or *b)
{
    return 100.f*(*b).wc-100.f*(*a).wc;
}

int main()
{
int t,n,k,i,j;
ll maxweight=0;
struct or *o;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);
o=malloc(sizeof(struct or)*n);
for(i=0;i<n;i++){
scanf("%d%d",&o[i].cost,&o[i].weight);
o[i].wc=o[i].weight/(double)o[i].cost;
}

maxweight=0;
qsort(o,n,sizeof(struct or),compare);

for(i=0;i<n;i++)
{
 if(o[i].cost<=k)
 maxweight+=o[i].weight;
 else
 break;

 k-=o[i].cost;
}
printf("%lld\n",maxweight);
}

return 0;
}
