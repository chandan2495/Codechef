#include<stdio.h>

int max(int a,int b)
{
    return a>b?a:b;
}

int main()
{
int i,a[10]={0},n=0,temp,count=0,temp2,temp1,temp3;
char s[100010];

scanf("%s",s);
i=0;
while(s[i])
{
 temp=s[i]-'0';
 if(a[temp]<(i+1))
 a[temp]=i+1;
 i++,n++;
}
i=0;count=0;
while(i!=n)
{
 temp=s[i]-'0';
 temp1=i>0?s[i-1]-'0':0;
 temp2=i<n-1?s[i+1]-'0':0;

 temp3=max(a[temp],max(a[temp1],a[temp2]));
 if(temp3==a[temp])
 count++;
 else if(temp3==a[temp1]&&a[temp1]>(i+1))
 count+=2;
 else if(temp3!=n&&temp3==a[temp2]&&a[temp2]>(i+2))
    count+=2;
    else if(temp3==n)
        count++;
 i=temp3-1;
 printf("%d\n",i);
 if(i==n)
    break;
}
if(count==1)
printf("%d\n",count);
else
    printf("%d\n",count+1);
return 0;
}
