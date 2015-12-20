#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a[100410],i,res,temp,max1=0,area=0,leftIdx=1;
    stack <int> r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<=n;i++){
        //printf("Current %d Element : %d\n",i,a[i]);
        if(r.empty()||a[r.top()]<a[i])
        {
            r.push(i);
            //printf("Pushed %d Element : %d\n",i,a[i]);
        }
        else{
            while(!r.empty() && a[r.top()]>a[i])
            {
                temp=r.top();
                //printf("Pop %d Element : %d\n",temp,a[temp]);
                r.pop();
                if(!r.empty())
                    leftIdx=r.top();
                else
                    leftIdx=0;
                //printf("Left Index : %d\n",leftIdx);
                area=a[temp]*(i-leftIdx-1);
                //printf("Area %d\n",area);
                max1=max1 >area?max1:area;
            }
            r.push(i);
        }
    }
    if(!r.empty())
    {
        i=n;
        while(!r.empty())
            {
                temp=r.top();
                //printf("Pop %d Element : %d\n",temp,a[temp]);
                r.pop();
                if(!r.empty())
                    leftIdx=r.top();
                else
                    leftIdx=0;
                //printf("Left Index : %d\n",leftIdx);
                area=a[temp]*(i-leftIdx);
                //printf("Area %d\n",area);
                max1=max1 >area?max1:area;
            }
    }
    printf("%d\n",max1);

    return 0;
}
