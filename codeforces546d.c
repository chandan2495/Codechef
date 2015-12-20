#include<stdio.h>

int a[5000010]={0};
int main()
{
int t,a1,b1,pr[100000],i,j,temp;
a[0]=0;a[1]=0;
for(i=2;i*i<=5000001;i++)
{
    if(a[i]==0)
    {
        a[i]=1;
        for(j=i+i;j<=5000001;j+=i){
        temp=j;
        while(temp%i==0){
        a[j]++;
        temp=temp/i;
        }
        }
    }
}
j=0;
for(i=1;i<=5000000;i++)
a[i]+=a[i-1];
scanf("%d",&t);
while(t--){
scanf("%d%d",&a1,&b1);

printf("%d\n",a[a1]-a[b1]);
}

return 0;
}
