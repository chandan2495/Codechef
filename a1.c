#include<stdio.h>

int getint()
{
    int n=0,c=0;
    while((c=getchar())<33);
    while(c>='0'&&c<='9')
    {
        n=(n<<3)+(n<<1)+c-'0';
        c=getchar();
    }
    return n;
}

int issum(int a[],int i,int n,int sum,int m)
{
    if(sum==m)
        return 1;
    if(i==n||sum>m)
        return 0;
    else
       return issum(a,i+1,n,sum+a[i],m)||issum(a,i+1,n,sum,m);
}

int main()
{
int t,n,m,a[21],i;

t=getint();
//scanf("%d",&t);
while(t--)
{
    n=getint();
    m=getint();
//scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
    a[i]=getint();
//scanf("%d",&a[i]);

if(issum(a,0,n,0,m))
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
