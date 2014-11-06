#include<stdio.h>

int main()
{
int n,q,k,lcount=0,rcount=0,i;
int a[51],total=0,j,l;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
scanf("%d",&q);
for(j=0;j<q;j++){
scanf("%d",&k);
lcount=0,rcount=0,total=0;
 for(l=n-1;l>=0;l--)
 {
     if(a[l]==k)
    {
        lcount=0,rcount=0;
     for(i=l+1;i<n;i++)
     {
     if(a[i]>=k)
        rcount++;
        else
            break;
 }
 for(i=l-1;i>=0;i--)
 {
     if(a[i]>k)
        lcount++;
        else
        break;
 }
 total+=lcount+rcount;
 total+=lcount*rcount;
 total++;
}
}
printf("%d\n",total);
}
return 0;
}
