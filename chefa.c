#include<stdio.h>
typedef long long ll;
int a[300100];

int compare(int *a,int *b)
{
return *b-*a;
}


int main()
{
int n,i,t;
ll max=0;
scanf("%d",&t);
while(t--){
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);
max=0;
for(i=0;i<n;i+=2)
max+=a[i];

printf("%lld\n",max);
}

return 0;
}
