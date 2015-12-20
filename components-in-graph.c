#include<stdio.h>


int pSet[100010],n,count[100010]={0},there[100010]={0};
int findSet(int i){
    return pSet[i]==i?i:findSet(pSet[i]);
}

void unionSet(int i,int j){
        int pari=findSet(i);
        int parj=findSet(j);
        if(pari!=parj){
        pSet[pari]=parj;
        //printf("c %d %d\n",pari,parj);
        count[parj]+=count[pari];
        }
}

int isSameSet(int i,int j){
    return findSet(i)==findSet(j);
}

int main(){
    int n,a,b,q,max,min,i;
    max=1;min=40000;
    scanf("%d",&n);

    for(i=1;i<=2*n;i++){
        pSet[i]=i;
        count[i]=1;
    }
    q=n;
    while(q--){
        scanf("%d%d",&a,&b);
        there[a]=there[b]=1;
        unionSet(a,b);
    }
    for(i=1;i<=2*n;i++)
    {
        if(there[i]==1&&i==pSet[i]){
            if(count[i]>max)
                max=count[i];
            if(count[i]<min)
                min=count[i];
        }
    }
    printf("%d %d\n",min,max);

    return 0;
}
