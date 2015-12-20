#include<stdio.h>
#include<string.h>

int main()
{
int n,a[107],i,m,next,count=0,temp,flag=0;
scanf("%d",&n);
while(n!=0)
{
    if(n==13)
    m=1;
    else{
    memset(a,0,sizeof(a));
     m=1; next=1;
     count=1;
     a[1]=1;
     while(1){
     memset(a,0,sizeof(a));
     next=1;
     flag=0;
     a[1]=1;
     while(1){
        temp=0;
        next=(next==n-1?(next+1):(next+1)%n);
        while(temp<m)
        {
         if(a[next]!=1)
         {
          temp++;
         }
         if(temp==m)
            break;
         next=(next==n-1?(next+1):(next+1)%n);
        }
        a[next]=1;
        for(i=1;i<=n;i++)
            if(i!=13&&a[i]==0)
                break;
        if(i==n+1){
            flag=1;
            break;
        }
        if(next==13)
            break;
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
