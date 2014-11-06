#include<stdio.h>

int n,a[3000],sum=0,table,mem[2001][2001]={0};

int max(int a,int b)
{
    return a>b?a:b;
}

int treat(int age,int left,int right)
{
    if(left>right)
        return 0;
    else if(mem[left][right]!=0)
        return mem[left][right];
    else
    {
      mem[left][right]=max(age*a[left]+treat(age+1,left+1,right),age*a[right]+treat(age+1,left,right-1));
      return mem[left][right];
    }
}

int main()
{
int i;
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("%d\n",treat(1,0,n-1));

return 0;
}
