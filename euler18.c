#include<stdio.h>
int a[15][15],count=0;

int max(int a,int b)
{
    return a>b?a:b;
}

int maxx(int a,int b,int c)
{
    return max(max(a,b),c);
}

int calc(int i,int j,int sum)
{

    if(i<0||j<0||i>14||j>i)
        return 0;
    if(i==14){
            count++;
           // printf("%d\n",a[i][j]);
        return a[i][j]+sum;
    }
  //  printf("%d ",a[i][j]);
    sum+=a[i][j];
    return max(calc(i+1,j,sum),calc(i+1,j+1,sum));
}

int main()
{
int i,j;

for(i=0;i<15;i++)
{
    for(j=0;j<=i;j++)
    scanf("%d",&a[i][j]);
}

printf("%d\n",calc(0,0,0));
printf("%d\n",count);
return 0;
}
