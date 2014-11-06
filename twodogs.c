#include<stdio.h>
#include<string.h>
#include<limits.h>

struct t{
int ty;
int po;
};
struct t t1[500001];
int compare(struct t *a,struct t *b)
{
return (*a).ty-(*b).ty;
}
int n,k;
int main()
{

int i,j,count1=0,count2=0,temp,count=INT_MAX,flag=0;
int low,high,mid;

scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&t1[i].ty);
t1[i].po=i;
}
qsort(t1,n,sizeof(struct t),compare);
for(i=0;i<n;i++)
{
if(k>t1[i].ty){
temp=k-t1[i].ty;
low=i+1,high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(t1[mid].ty==temp)
break;
else if(t1[mid].ty<temp)
low++;
else
high--;
}
if(low>high)
continue;
count1=t1[i].po<(n-1-t1[i].po)?t1[i].po+1:(n-t1[i].po);
count2=t1[mid].po<(n-1-t1[mid].po)?t1[mid].po+1:(n-t1[mid].po);
count1=count1>count2?count1:count2;
count=count1>count?count:count1;
flag=1;
}
else
    break;
}
if(flag==0)
printf("-1\n");
else{
printf("%d\n",count);
}
return 0;
}
