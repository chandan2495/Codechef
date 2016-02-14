#include<stdio.h>
#include<limits.h>

int abs(int a){
    return a>0?a:-a;
}
int getMin(int i,int *min1,int *min2){
    if(*min1>i){
        *min2=*min1;
        *min1=i;
    }
    else if(*min2>i){
        *min2=i;
    }    
}

int pSet[100010],n,count[100010]={0},min1=1,min2=1;
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
            count[i]=count[j]=count[parj]; 
            getMin(count[parj],&min1,&min2);
        }
}

int isSameSet(int i,int j){
    return findSet(i)==findSet(j);
}

int main(){
    int q,i,a,b,j,visited[100010]={0},sum=0;
    char o;
    scanf("%d%d\n",&n,&q);

    for(i=1;i<=n;i++){
        pSet[i]=i;
        count[i]=1;        
    }
    while(q--){
            min1=INT_MAX;
            min2=INT_MAX;
            sum=0;
            scanf("%d%d",&a,&b);
            unionSet(a,b);            
            // printf("min1 %d min2 %d\n", min1,min2);
            if(min2!=n&&min1!=n)
                printf("%d\n",abs(min2-min1));
            else
                printf("0\n");
    }

return 0;
}
