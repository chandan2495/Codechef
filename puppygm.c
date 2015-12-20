#include<stdio.h>

int main()
{
int t,a,b,i,res=0,div;
scanf("%d",&t);
while(t--)
{
    scanf("%d%d",&a,&b);
    if(a==1&&b==1)
        res=!res;
    while(a!=1&&b!=1)
    {
        if(a%2==0)
         div=b;
        else
         div=a;
        if(a==1)
         div=b;
        if(b==1)
          div=a;
        if(div%2!=0)
         a=div/2,b=(div/2)+1;
        else
         a=div/2,b=(div/2);
        res=!res;
    }


    if(res==0)
    printf("Tuzik\n");
    else
    printf("Vanka\n");
}


return 0;
}
