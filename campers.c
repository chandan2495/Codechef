#include<stdio.h>


int a[2001000];
int main()
{
int n,k,i,j,res=0,sn,revres=0;

scanf("%d%d",&n,&k);
for(i=0;i<k;i++){
scanf("%d",&sn);
a[sn]=1;
}
res=k;

for(i=1;i<=n;)
{
   if(a[i]!=1){
   if(a[i+1]!=1)
        res++,a[i]=1,i+=2;
   else
        i+=3;
   }
   else if(i==n)
    res++,a[i]=1,i++;
   else
    i+=2;

}

for(i=n;i>=1;i--)
{
 if(a[i]!=1){
   if(a[i-1]!=1)
        revres++,a[i]=1,i-=2;
   else
        i-=3;
   }
   else if(i==1)
    revres++,a[i]=1,i--;
   else
    i-=2;
}

res=res>revres?res:revres;
//for(i=1;i<=n;i++)
//    printf("%d ",a[i]);
printf("%d\n",res);
return 0;
}
