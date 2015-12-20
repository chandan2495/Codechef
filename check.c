
#include<stdio.h>



int t,n,k,temp,i,j;
int w[30][30];
char s[100],s1[100];
double res=0.0;
int main()
{
scanf("%d",&t);
while(t--)
{
    scanf("%d%d",&n,&k);
    //scanf("%s",s);
    for(i=0;i<26;i++)
    {
        for(j=0;j<26;j++)
        {
            scanf("%d",&temp);
            w[i][j]=temp;
        }
    }
    while(n--){
    scanf("%s",s1);
    }
    printf("%lf\n",res);
}

return 0;
}
