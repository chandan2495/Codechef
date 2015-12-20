#include<stdio.h>

int compare(int *a,int *b)
{
    return *a-*b;
}

int main()
{
int n,nq,a[100010],res,i,q,flag=0,j,mid;

scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);
scanf("%d",&nq);
while(nq--){
scanf("%d",&q);

i=0,j=n-1;flag=0;
while(i<=j){
mid=(i+j)/2;
if(a[mid]<q&&(mid+1<n&&a[mid+1]>=q)){
flag=1;
break;
}
else if(a[mid]<q)
i=mid+1;
else
j=mid-1;
}
if(flag==1)
printf("%d\n",mid+1);
else if(q>a[n-1])
printf("%d\n",n);
else
printf("0\n");
}
return 0;
}
