#include<stdio.h>

#define mod 1000000007
typedef long long ll;
int main(){
    ll t,n,x,m,a[100010],i,j,res=0,temp;
    scanf("%lld",&t);
    while(t--){
        res=0;
        scanf("%lld%lld%lld",&n,&x,&m);
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        for(i=1;i<x;i++){
            res+=(res+(m*a[i]));
            if(res>mod)
                res=res%mod;
        }
        printf("%lld\n",(res+a[x])%mod);
    }
    return 0;
}
