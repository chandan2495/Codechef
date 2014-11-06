#include<stdio.h>

int main()
{
long long a;

scanf("%lld",&a);
if(a%6==0||a%6==1||a%6==3)
printf("yes\n");
else
printf("no\n");

return 0;
}
