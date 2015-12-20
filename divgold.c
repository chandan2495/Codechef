#include<stdio.h>

struct a1{
char c;
int p;
};
struct a1 a[100];

int compare(struct a1 *a,struct a1 *b)
{
 if((*a).c==(*b).c)
 return (*a).p-(*b).p;
 return (*a).c-(*b).c;
}

int main()
{
int t,n,i,j,k;
char temp,b[100];
scanf("%d",&t);
while(t--)
{
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
 scanf("%c",&a[i].c);
 b[i]=a[i].c;
 a[i].p=i;
 }
b[i]='\0';

qsort(a,n,sizeof(struct a1),compare);

/*
for(i=0;i<n;i++)
printf("%c",a[i].c);
printf("\n");*/

for(i=0;i<n;i++)
{
 if(a[i].p!=i)
 {
     /*
  j=a[i].p;
  temp=b[j];
  b[j]=b[i];
  b[i]=temp;*/
  k=i;
  while(a[k].c==a[k+1].c)
    k++;

  for(j=a[k].p;j>i;j--){
        b[j]=b[j-1];
  }
  b[i]=a[k].c;
  break;
 }
}

printf("%s\n",b);
}

return 0;
}
