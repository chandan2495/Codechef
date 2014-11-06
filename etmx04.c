#include<stdio.h>

int abs(int a)
{
return a<0?-a:a;
}
int main()
{
int c,min,c1,t;
c1=getchar();
getchar();
min=50;
while((c=getchar())!='\n')
{
 if(min>abs(c1-c))
 min=abs(c1-c);
 c1=c;
 t=getchar();
 if(t=='\n'||t=='\0'||t==EOF)
    break;
}
printf("%d\n",min);
return 0;
}
