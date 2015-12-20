#include<stdio.h>

int n;
char s[6000];

int min(int a,int b)
{
    return a>b?b:a;
}

int isPallin(int i,int j)
{
    int k,l;
    for(k=i,l=j;k<j;k++,l--)
        if(s[i]!=s[j])
            return 0;
    return 1;
}

int calc(int i,int j)
{
    if(i>j||i==n||j==n)
        return 0;
    if(isPallin(i,j)){
        printf("%d %d\n",i,j);
        return 1;
    }
    return min(calc(i,j+1),calc(i+1,j)+1);
}

int main()
{
int t,i;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    scanf("%s",s);
    printf("%d\n",calc(0,1));
}

return 0;
}
