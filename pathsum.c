#include<stdio.h>
int a[100100],n;

int getint()
{
    int n=0,c=0;
    while((c=getchar())<33);
    if(c=='#')
        return -1;
    while(c>='0'&&c<='9')
    {
        n=(n<<3)+(n<<1)+c-'0';
        c=getchar();
    }
    return n;
}

int pathsum(int root,int sum,int k)
{
   // printf("%d\n",sum);
 if(a[root]==-1||sum>k||root>n)
 return 0;
 else if((2*root>n&&2*root+1>n)||(a[2*root]==-1&&a[2*root+1]==-1))
 {
 sum+=a[root];
  if(sum==k){
        printf("%d ",a[root]);
  return 1;
  }
  else
  return 0;
 }
 else
 {
 sum+=a[root];
  if(pathsum(2*root,sum,k)){
  printf("%d ",a[root]);
  if(root==1)
    printf("\n");
  if(root!=1)
  return 1;
  }
  if(pathsum(2*root+1,sum,k)){
  printf("%d ",a[root]);
  return 1;
  }

 }

}

int main()
{
int k,l,i,c;

scanf("%d%d",&k,&l);
i=1;
n=(1<<l)-1;
while(i<=n)
{
 a[i]=getint();
 i++;
}
for(i=1;i<=n;i++)
    printf("%d ",a[i]);
printf("\n");
pathsum(1,0,k);
return 0;
}
