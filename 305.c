#include<stdio.h>
#include<string.h>

int main()
{
int n,a[107],i,m,next,count=0,temp,flag=0,n1;
scanf("%d",&n);
while(n!=0)
{
    if(n==1)
    m=2;
    else{
    n1=n*2;
    memset(a,0,sizeof(a));
     m=n+1; next=m;
     count=1;
     a[m]=1;
     while(1){
     memset(a,0,sizeof(a));
     next=1;
     flag=0;

     temp=0;
     while(temp<m)
     {
        temp++;
        if(temp==m)
            break;
        next=(next==n1-1?(next+1):(next+1)%n1);
     }
     a[next]=1;
     while(1){
        temp=0;
        next=(next==n1-1?(next+1):(next+1)%n1);
        while(temp<m)
        {
         if(a[next]!=1)
         {
          temp++;
         }
         if(temp==m)
            break;
         next=(next==n1-1?(next+1):(next+1)%n1);
        }
        a[next]=1;
        if(next<=n){
            break;
        }
        for(i=n+1;i<=n1;i++)
            if(a[i]==0)
                break;
        if(i==n1+1){
            flag=1;
            break;
        }
     }
     if(flag==1)
        break;
     else
        m++;
    }
    }
    printf("%d\n",m);
    scanf("%d",&n);
}

return 0;
}
