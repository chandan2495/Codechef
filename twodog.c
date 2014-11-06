#include<stdio.h>
#include<string.h>
#include<limits.h>
int n,k,t[500010],h[1000001]={0};
int getint()
{
    int n=0,c=0;
    while((c=getchar())<33);
    while(c>='0'&&c<='9')
    {
        n=(n<<3)+(n<<1)+(c-'0');
        c=getchar();
    }
    return n;
}
int main()
{

int i,j,count1=0,count2=0,temp,count=INT_MAX,flag=0;

memset(h,-1,sizeof(h));

//scanf("%d%d",&n,&k);
n=getint();
k=getint();
for(i=0;i<n;i++){
        t[i]=getint();
//scanf("%d",&t[i]);
if(h[t[i]]!=-1)
{
count1=i<(n-1-i)?i:(n-1-i);
count2=h[t[i]]<(n-1-h[t[i]])?h[t[i]]:(n-1-h[t[i]]);
count1=count1>count2?count2:count1;
h[t[i]]=count1;
}
else
h[t[i]]=i;
}
for(i=0;i<n;i++)
{
if(k>t[i]){
temp=k-t[i];
if(temp!=t[i]&&h[temp]!=-1)
{
count1=i<(n-1-i)?i+1:(n-i);
count2=h[temp]<(n-1-h[temp])?h[temp]+1:(n-h[temp]);
count1=count1>count2?count1:count2;
count=count1>count?count:count1;
flag=1;
}
}
}
if(flag==0)
printf("-1\n");
else{
printf("%d\n",count);
}
return 0;
}
