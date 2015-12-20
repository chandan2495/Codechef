#include<stdio.h>

int main()
{

int t,a[26]={2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,999,9999},i;
int count=1;
char s[1010];

freopen("small.in","r",stdin);
freopen("t9spelling.out","w",stdout);

scanf("%d",&t);
getchar();
while(t--)
{
scanf("%[^\n]s",s);
if(t!=0)
getchar();
printf("Case #%d: ",count);
for(i=0;s[i];i++)
{
    if(s[i]==' '){
    if(i>0&&s[i-1]==' ')
        printf(" 0");
    else
        printf("0");
    }
    else{
        if(i>0&&(a[s[i-1]-'a']%10==a[s[i]-'a']%10))
            printf(" %d",a[s[i]-'a']);
        else
            printf("%d",a[s[i]-'a']);
    }
}
printf("\n");
count++;
}

return 0;
}
