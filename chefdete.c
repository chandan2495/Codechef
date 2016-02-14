#include<stdio.h>

int main(){
    int n,a[100010]={0},r,i,max=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&r);
        a[r]++;
    }
    for(i=1;i<=n;i++){
        if(a[i]==0)
            printf("%d ",i);
    }

    return 0;
}
