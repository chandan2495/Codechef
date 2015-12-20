#include<stdio.h>
#include<math.h>
int main()
{
int t,a,b,i,res;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&a,&b);
if(b%a==0)
{
 res=(int)log2(b)-(int)log2(a);
}
else{
    res=0;
    while(b%a!=0)
    {
        if(a%2==0)
            a/=2;
        else
            a=(a-1)/2;
    res++;
    }
    res+=(int)log2(b)-(int)log2(a);
}
printf("%d\n",res);
}

return 0;
}
