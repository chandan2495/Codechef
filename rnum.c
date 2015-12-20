#include<stdio.h>
#include<string.h>

int a[1000010];
int main()
{
int t,n,i,min,max,no,count=0,maxn=0;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
maxn=0;
memset(a,0,sizeof(a));
for(i=0;i<n;i++){
scanf("%d",&no);
if(maxn<no)
    maxn=no;
a[no]++;
}
count=0; min=0;max=0;
for(i=1;i<=maxn;){
    if(a[i]>0){
            count=0;
    while(i<=maxn&&a[i]>0)
    {
        count++;
        i++;
    }
    if(count>0)
    {
        if(count%3!=0)
            min+=(count/3)+1;
        else
            min+=(count/3);
        if(count%2!=0)
            max+=(count/2)+1;
        else
            max+=(count/2);
        count=0;
    }
    }
    i++;
}

printf("%d %d\n",min,max);
}

return 0;
}
