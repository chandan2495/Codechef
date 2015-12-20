#include<stdio.h>

int xx[]={-1,-1,1,1};
int yy[]={-1,1,-1,1};
int a[8][8],yc1,yc2,xc1,xc2;

int calc(int x,int y,int count)
{
    int i;
    if(count>4)
        return 0;
    if(x==8||y==8)
        return 0;
    if(x==xc2&&y==yc2)
        return 1;
    for(i=0;i<4;i++)
    {
        if(calc(x+xx[i],y+yy[i],count+1))
    }
    return 1;
}
int main()
{
int t,i,j,val;
char s[10000],x1c,x2c;
scanf("%d\n",&t);
val=0;
for(i=7;i>=0;i--)
    for(j=0;j<8;j++)
        a[i][j]=val,val=!val;

while(t--)
{
    gets(s);
    sscanf(s,"%c %d %c %d",&x1c,&yc1,&x2c,&yc2);
    xc1=x1c-'A';
    xc2=x2c-'A';
    yc1--;yc2--;
    if(a[xc1][yc1]==a[xc2][yc2])
    {
        printf("impossible\n");
    }
    else{
        calc(xc1,yc1,0);
    }

    //printf("%d %d %d %d\n",xc1,yc1,xc2,yc2);
}

return 0;
}
