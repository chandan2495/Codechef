#include<stdio.h>
#include<string.h>

int a[41][30001],b[20001];
struct temp{
int k;
int pos;
int max;
};

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

int compare(struct temp *t1,struct temp *t2)
{
    return (*t1).max-(*t2).max;
}
int main()
{
int n,m,k[41],c,i,j,l,max,count;
struct temp t[40];
n=getint();
m=getint();
//scanf("%d%d",&n,&m);
j=0;
for(i=0;i<m;i++)
{
    t[i].k=getint();
 //scanf("%d",&t[i].k);
 t[i].pos=i;
 for(j=0;j<t[i].k;j++)
 {
     c=getint();
  //scanf("%d",&c);
  a[i][c]=1;
 }
}

max=0,count=0;
for(i=0;i<m;i++)
{
    max=0;count=0;
    for(j=1;j<=n;j++)
    { count=0;
        for(l=0;l<m;l++)
        {
            if(a[t[i].pos][j]==1&&a[t[l].pos][j]==1)
                count++;
        }
        if(max<count)
            max=count;
    }
    t[i].max=max;
}
//memset(b,0,sizeof(b));
qsort(t,m,sizeof(struct temp),compare);
count=1;
memset(b,0,sizeof(b));
    for(l=0;l<t[0].k;l++)
    b[a[t[0].pos][l]]=1;
for(i=1;i<m;i++)
{
   for(j=0;j<t[i].k;j++)
   {
       if(b[a[t[i].pos][j]]==0)
       continue;
       else
            break;
   }
   if(j==t[i].k)
   {
       for(j=0;j<t[i].k;j++)
        b[a[t[i].pos][j]]=1;
       count++;
   }
}

printf("%d\n",count);
 return 0;
}
