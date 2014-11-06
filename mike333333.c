#include<stdio.h>
#include<string.h>

int a[41][30001],b[20001],k[41];
int n,m,c,i,j,l,max,count,pos;


int bpm(int u,int seen[],int c[])
{
    int v;
    for(v=1;v<20001;v++)
    {
        if(a[u][v]==1&&seen[v]==0)
        {
            seen[v]=1;
            if(c[v]<0||bpm(c[v],seen,c))
            {
                c[v]=u;
                return 1;
            }
        }
    }
    return 0;
}

int maxbpm()
{
    int c[20001];
    memset(c,-1,sizeof(c));


    int result=0,u;
    //printf("c%d\n",c[5]);
    for(u=0;u<m;u++)
    {

        int seen[20001];
        memset(seen,0,sizeof(seen));

        if(bpm(u,seen,c)){
            result++;
            printf("%d\n",u);
        }
    }
    return result;
}

int main()
{
//n=getint();
//m=getint();
scanf("%d%d",&n,&m);
j=0;
for(i=0;i<m;i++)
{
 //   t[i].k=getint();
 scanf("%d",&k[i]);
 for(j=0;j<k[i];j++)
 {
  //   c=getint();
  scanf("%d",&c);
  a[i][c]=1;
 }
}

printf("%d\n",maxbpm());
 return 0;
}
