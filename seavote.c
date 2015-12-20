    #include<stdio.h>

    int main()
    {
    int t,n,b[50000],i,sum=0,count=0;

    scanf("%d",&t);
    while(t--)
    {
        sum=0;
     scanf("%d",&n);
    count=0;
     for(i=0;i<n;i++){
     scanf("%d",&b[i]);
     if(b[i]==0)
        count++;
     sum+=b[i];
     }

     if(sum==100)
     printf("YES\n");
     else if(sum>100&&(sum-(n-count))<100)
     printf("YES\n");
     else if(sum>100&&(sum-n+2*count)<100)
     printf("YES\n");
     else
     printf("NO\n");

    }

    return 0;

    }
