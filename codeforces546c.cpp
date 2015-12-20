#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,k1,k2,i,j,atc[12]={0},btc[12]={0},res=0,no,flag=0,a1[15],b1[15];
queue<int> a;
queue<int> b;
scanf("%d",&n);
scanf("%d",&k1);
for(i=0;i<k1;i++)
{
    scanf("%d",&a1[i]);
    a.push(a1[i]);
}

scanf("%d",&k2);
for(i=0;i<k2;i++)
{
    scanf("%d",&b1[i]);
    b.push(b1[i]);
}


    while(!a.empty()&&!b.empty())
    {
        if(a.front()>b.front()){
            while(a.front()>b.front()&&!a.empty()&&!b.empty())
            {
                //printf("WA%d TB%d\n",a.front(),b.front());
                res++;
                atc[b.front()]++;
                if(atc[b.front()]>5){
                    flag=1;
                    break;
                }
                a.push(b.front());
                a.push(a.front());
                a.pop();
                b.pop();
            }
        }
        else{
            while(a.front()<b.front()&&!a.empty()&&!b.empty())
            {
                //printf("TA%d WB%d\n",a.front(),b.front());

                res++;
                btc[a.front()]++;
                if(btc[a.front()]>5){
                    flag=1;
                    break;
                }
                b.push(a.front());
                b.push(b.front());
                a.pop();
                b.pop();
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("-1\n");
    else{
        if(a.empty())
            printf("%d 2\n",res);
        else if(b.empty())
            printf("%d 1\n",res);
    }


return 0;
}
