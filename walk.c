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

int main()
{
int t,n,i,max,pos,w;
t=getint();
//scanf("%d",&t);
while(t--)
{
max=0;pos=0;
n=getint();
//scanf("%d",&n);
for(i=0;i<n;i++){
        w=getint();
//scanf("%d",&w);
w=w+i;
if(max<=w)
{
 max=w;
}
}
printf("%d\n",max);
}
return 0;
}
