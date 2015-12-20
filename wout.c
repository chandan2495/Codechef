#include<stdio.h>
#include<string.h>

int main()
{
int t,n,h,i,k,l,sum,j,flag=0,h1;
int a[110][110],min,b[110];

scanf("%d",&t);
while(t--)
{
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
scanf("%d%d",&n,&h);

for(j=0;j<n;j++)
{
scanf("%d%d",&l,&h1);
for(i=l;i<=h1;i++)
    a[i][j]=1;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++){
        a[i][j]=!a[i][j];
        b[i]+=a[i][j];
    }
}
/*for(i=0;i<n;i++)
{
    printf("b %d\n",b[i]);
    for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
    }
    printf("\n");
}*/

min=9999999;
for(i=0;i<n-h+1;i++)
{
    sum=0; flag=0;
    for(j=i;j<(h+i)&&j<n;j++){
        sum+=b[j];
        flag=1;
    }
    //printf("i %d s %d\n",i,sum);
    if(flag==1&&sum<min)
        min=sum;
}
printf("%d\n",min);
}
return 0;
}
