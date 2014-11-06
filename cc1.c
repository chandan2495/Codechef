#include<stdio.h>

int abs(int a)
{
    return a>0?a:-a;
}

typedef unsigned long long ll;
int main()
{
int t;
ll n,x1,x2,y1,y2;
scanf("%d",&t);
while(t--)
{
scanf("%llu",&n);
scanf("%llu%llu%llu%llu",&x1,&y1,&x2,&y2);
if(x1==x2&&y1==y2)
    printf("0\n");
 else if(((x1-x2)==(y1-y2))||((x2-x1)==(y2-y1))){
            printf("1\n");}

else if(abs(x1-x2)%2==0&&abs(y1-y2)%2==0){
if(abs(x1-x2)==abs(y1-y2))
    printf("1\n");
else
    printf("2\n");
}
else
printf("-1\n");
}
return 0;
}
