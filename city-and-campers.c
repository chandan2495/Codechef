#include<stdio.h>
#include<limits.h>

int pSet[100010],n,count[100010]={0},min=1,max=1;
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
        max=max<count[parj]?count[parj]:max;
        min=min>count[parj]?count[parj]:min;        
        }
}

int isSameSet(int i,int j){
    return findSet(i)==findSet(j);
}

int main(){
    int q,i,a,b;
    char o;
    scanf("%d%d\n",&n,&q);

    for(i=1;i<=n;i++){
        pSet[i]=i;
        count[i]=1;        
    }
    while(q--){
            scanf("%d%d",&a,&b);
            unionSet(a,b);
            if(max!=n)
                printf("%d\n",max-min);
            else
                printf("0\n");
    }

return 0;
}
