#include<stdio.h>

struct a1{
 int no;
 int pos;
};

int compare(struct a1 *a,struct a1 *b)
{
 return (*a).no-(*b).no;
}

int compareint(int *a,int *b)
{
    return *a-*b;
}


int main()
{
int n,b[200],i,j,k=0,sum=0;
struct a1 a[200];

scanf("%d%d",&n,&k);

for(i=0;i<n;i++){
scanf("%d",&a[i].no);
a[i].pos=i+1;
}

qsort(a,n,sizeof(struct a1),compare);
j=0;
for(i=0;i<n;i++)
{
 sum+=a[i].no;
 if(sum>k)
 break;
 b[j++]=a[i].pos;
}

qsort(b,j,sizeof(int),compareint);

printf("%d\n",j);
for(i=0;i<j;i++)
printf("%d ",b[i]);

printf("\n");

return 0;

}
