#include<stdio.h>

inline int getint()
{
    int n=0,c=0;
    while((c=getchar_unlocked())<33);
    while(c>='0'&&c<='9')
    {
        n=(n<<3)+(n<<1)+(c-'0');
        c=getchar_unlocked();
    }
    return n;
}

int main(){
int t,n,a,max,b,i,min;

t=getint();
//scanf("%d",&t);
while(t--)
{
    n=getint();
//scanf("%d",&n);
max=0; min=100000000;
a=getint();
//scanf("%d",&a);
if(min>a)
    min=a;
for(i=1;i<n;i++)
{
a=getint();
//scanf("%d",&a);
if((a-min)>max)
max=a-min;
if(min>a)
    min=a;
}

if(max>0)
printf("%d\n",max);
else
printf("UNFIT\n");
}
return 0;
}
