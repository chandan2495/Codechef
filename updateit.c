#include<stdio.h>
#include<math.h>
#include<string.h>

int t,n,u,q,a[10101]={0},*seg;

int update(int i,int j,int l,int r,int val,int index)
{
if(l<=i&&r>=j){
seg[index]+=val;
return seg[index];
}
if(i==j)
a[i]=seg[index];
if(j<l||i>r)
return 0;

int mid=(i+j)/2;

update(i,mid,l,r,val,2*index+1);
update(mid+1,j,l,r,val,2*index+2);
}


int construct(int i,int j,int index)
{
 if(i==j)
 {
  seg[index]=a[i];
  return a[i];
 }

 else
 {
 int mid=(i+j)/2;
 seg[index]=construct(i,mid,2*index+1)+construct(mid+1,j,2*index+2);
 return seg[index];
 }
}

int main()
{
int size,i,j,val;
scanf("%d",&t);
while(t--)
{
 memset(a,0,sizeof(a));
 size=(int)(log2(n));
 size=2*(pow(2,size))-1;
 scanf("%d%d",&n,&u);

 construct(0,n-1,0);
 while(u--)
 {
  scanf("%d%d%d",&i,&j,&val);
  update(0,n-1,i,j,val,0);
 }
 scanf("%d",&q);
 while(q--)
 {
  scanf("%d",&i);
  printf("%d\n",a[i]);
 }
}
return 0;
}
