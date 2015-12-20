#include<stdio.h>

#define mod 1000000007
typedef long long ll;

ll multiply(ll a,ll b)
{
    ll x=0,y=b%mod;
    a=a%mod;
    while(y>0)
    {
        if(y&1)
        {
            x=(x+a)%mod;
        }
        a=(a<<1)%mod;
        y=y>>1;
    }
    return x;
}

/*

4*4
=4*2*(4/2)=8
=8*2*(2/2)=16

*/
int main()
{
int t,i,j;
ll a[3],res,temp;

scanf("%d",&t);
while(t--)
{
 for(i=0;i<3;i++)
 scanf("%lld",&a[i]);
 //qsort(a,3,sizeof(ll),compare);
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         if(a[i]<a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
 }
 res=multiply(a[0],a[1]-1);
 //printf("%llu\n",res);
 res=multiply(res,a[2]-2);
 //res=((((a[0]%mod)*((a[1]-1)%mod))%mod)*((a[2]-2)%mod))%mod;
 printf("%lld\n",res);
}
return 0;
}


/*
3 4 3

1 4 3
2 4 3
1 2 3
2 1 3
3 4 1
3 4 2
3 2 1
3 1 2
1 3 2
2 3 1


1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
1 4 2
1 4 3
2 4 1
2 4 3
3 4 1
3 4 2

*/
