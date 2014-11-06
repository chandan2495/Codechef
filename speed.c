    #include<stdio.h>

    int abs(int a)
    {
        return a>0?a:-a;
    }

    int gcd(int a,int b)
    {
        return b?gcd(b,a%b):a;
    }

    int main()
    {
    int t,a,b;

    scanf("%d",&t);
    while(t--)
    {
     scanf("%d%d",&a,&b);
     printf("%d\n",abs(a>b?(a-b)/gcd(a,b):(b-a)/gcd(a,b)));
    }
    return 0;
    }
