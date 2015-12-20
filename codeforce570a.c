#include<stdio.h>

int main()
{
int n,m,i,j,a[110][110],maxc[110]={0},max,res=0,maxp,resu=1;
scanf("%d%d",&n,&m);

for(i=1;i<=m;i++)
{
    max=0;maxp=1;
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
        if(max<a[i][j]){
            max=a[i][j];
            maxp=j;
        }
    }
    maxc[maxp]++;
    if(res<maxc[maxp])
     res=maxc[maxp],resu=maxp;
    else if(res==maxc[maxp]&&resu>maxp)
        resu=maxp;
}

printf("%d\n",resu);
return 0;
}
