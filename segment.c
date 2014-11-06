#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<string.h>
#include<malloc.h>

int a[50100],*segtree;
int maxx(int a,int b)
{
 return a>b?a:b;
}

int max(int a,int b,int c)
{
 return maxx(a,maxx(b,c));
}

int construct(int i,int j,int index)
{
 if(i==j)
 {
  segtree[index]=a[i];
  return a[i];
 }
 else
 {
  int mid=(i+j)/2;
  int left=construct(i,mid,2*index+1);
  int right=construct(mid+1,j,2*index+2);
  if(left>right)
  segtree[index]=maxx(right,left+right);
 }
}


int getsum(int ql,int qr,int i,int j,int index)
{
 if(ql<=i&&qr>=j)
 return segtree[index];
 else if(ql>j||i>qr)
 return INT_MIN;
 else{
 int sum=0;
 int mid=(i+j)/2;
 int left=getsum(ql,qr,i,mid,2*index+1);
 int right=getsum(ql,qr,mid+1,j,2*index+2);
 if(left==INT_MIN&&right==INT_MIN)
 return INT_MIN;
 else if(left==INT_MIN)
    return right;
 else if(right==INT_MIN)
    return INT_MIN;
 else
    return maxx(right,left+right);
 }
}

int main()
{
int n,m,i,size,inf,ql,qr;
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);
size=(int)(ceil(log2(n)));

size=2*pow(2,size);
segtree=(int*)malloc(sizeof(int)*size);
inf=INT_MIN;
memset(segtree,inf,size*sizeof(int));

construct(0,n-1,0);
 for(i=0;i<=size;i++)
 printf("%d %d\n",i,segtree[i]);
scanf("%d",&m);
while(m--)
{
 scanf("%d%d",&ql,&qr);
 printf("%d\n",getsum(ql-1,qr-1,0,n-1,0));
}
return 0;
}
