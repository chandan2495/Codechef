#include<stdio.h>
typedef unsigned long long ll;
ll a[100010],sum[100010],max=0;
int pSet[100010],n,count[100010]={0};
int findSet(int i){
    return pSet[i]==i?i:(pSet[i]=findSet(pSet[i]));
}

void unionSet(int i,int j){
        int pari=findSet(i);
        int parj=findSet(j);
        if(pari!=parj){
        pSet[pari]=parj;
        //printf("c %d %d\n",pari,parj);
        count[parj]+=count[pari];
        sum[parj]+=sum[pari];
        if(sum[parj]>max)
            max=sum[parj];
        }
}

int isSameSet(int i,int j){
    return findSet(i)==findSet(j);
}

int main(){
    int t,n,m,i,j,u,v,tm[100100][2];
    scanf("%d",&t);
    while(t--){
        max=0;
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++){
            pSet[i]=i;
            count[i]=1;            
        }
        for(i=0;i<m;i++){
            scanf("%d%d",&tm[i][0],&tm[i][1]);            
        }
        for(i=1;i<=n;i++){
            scanf("%llu",&a[i]);            
            sum[i]=a[i];
            if(sum[i]>max)
                max=sum[i];
        }
        for(i=0;i<m;i++){         
            unionSet(tm[i][0],tm[i][1]);
        }
        printf("%llu\n",max);
    }

return 0;
}
