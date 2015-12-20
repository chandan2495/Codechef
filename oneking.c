#include<stdio.h>

typedef struct k{
 int a;
 int b;
}k1;

k1 k[200010];

int compare(k1 *a,k1 *b)
{
 if((*a).a==(*b).a)
    return (*a).b-(*b).b;
 return (*a).a-(*b).a;
}

int main()
{
int t,n,i,count=0,j,temp,a,b;

scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
j=0;
for(i=0;i<n;i++){
scanf("%d%d",&a,&b);

k[j].a=a;
k[j].b=-1;
j++;

k[j].a=b;
k[j].b=1;
j++;
}

qsort(k,n,sizeof(k1),compare);

count=0;temp=0;
for(i=0;i<2*n;i++)
{
    //printf("%d %d\n",k[i].a,k[i].b);
if(k[i].b==1&&k[i-1].b==-1)
    count++;
}

printf("%d\n",count);

}

return 0;
}
