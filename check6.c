    #include<stdio.h>
    long long int a[100006];
    int main()
    {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int n,i,min=10000007,k;
    long long int s=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
    scanf("%lld",&a[i]);
    if(min>a[i])
    {
    min=a[i];
    k=i;
    }
    }
    for(i=0;i<n;i++)
    {
    s=s+a[i]*min;
    }
    s=s-min*min;
    printf("%lld\n",s);
    }
    return 0;
    }
