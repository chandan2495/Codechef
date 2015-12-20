#include<stdio.h>


int pSet[100010],n,count[100010]={0};
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
    int q,i,a,b;
    char o;
    scanf("%d%d\n",&n,&q);

    for(i=1;i<=n;i++){
        pSet[i]=i;
        count[i]=1;
    }
    while(q--){
        scanf("%c",&o);
        if(o=='M')
        {
            scanf("%d%d",&a,&b);
            getchar();
            unionSet(a,b);
        }
        else if(o=='Q'){
            scanf("%d",&a);
            getchar();
            //printf("f %d\n",findSet(a));
            printf("%d\n",count[findSet(a)]);
        }
    }

return 0;
}
