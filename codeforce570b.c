#include<stdio.h>

int main()
{
int n,m;
scanf("%d%d",&n,&m);
if((n%2==0)){
 if((n/2)>=m)
    printf("%d\n",m+1);
 else
    printf("%d\n",m-1);
}
else {
 if(((n/2)+1)>=m)
    printf("%d\n",m+1);
 else
    printf("%d\n",m-1);
}
return 0;
}
