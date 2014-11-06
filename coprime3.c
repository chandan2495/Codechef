        #include<stdio.h>

    int gcd(int a,int b)
    {
     return b?gcd(b,a%b):a;
    }

    int main()
    {
    int n,a[100010],count,i,j,k;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    count=0;
    for(i=0;i<n-2;i++)
    {
     for(j=i+1;j<n-1;j++)
     {
      for(k=j+1;k<n;k++)
      {
       if(gcd(a[i],gcd(a[j],a[k]))==1)
       count++;
      }
     }
    }
    printf("%d\n",count);
    return 0;
    }
