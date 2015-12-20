#include<stdio.h>

int x[]={0,0,-1,-1,-1,1,1,1};
int y[]={-1,1,0,-1,1,0,-1,1};

int main()
{
int a[21][21],i,j,k,l,m,pro=1,max=0,count,nos[4],maxn[4];

for(i=0;i<20;i++)
{
    for(j=0;j<20;j++)
        scanf("%d",&a[i][j]);
}

for(i=0;i<20;i++)
{
    for(j=0;j<20;j++)
    {
       for(k=0;k<8;k++)
       {
        count=3;pro=a[i][j];l=i+x[k];m=j+y[k];
        nos[count]=a[i][j];
        while(count>0)
        {
            if(l>19||m>19||l<0||m<0)
                break;
            pro*=a[l][m];
            count--;
            nos[count]=a[l][m];
            l=l+x[k];m=m+y[k];
        }
        if(count==0)
        {
            for(l=3;l>=0;l--)
                printf("%d ",nos[l]);
            printf("\nk %d\n",k);
            if(pro>max){
                max=pro;
                for(l=3;l>=0;l--)
                   maxn[l]=nos[l];
            }
        }
       }
    }
}

printf("%d\n",max);
for(l=3;l>=0;l--)
    printf("%d ",maxn[l]);

return 0;
}
