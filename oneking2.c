
    #include<stdio.h>

    typedef struct k{
    int a;
    int b;
    }k1;

    k1 k[100010];

    int compare(k1 *a,k1 *b)
    {
    return (*a).b-(*b).b;
    }

    int main()
    {
    int t,n,i,count=0,j;

    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d%d",&k[i].a,&k[i].b);

    qsort(k,n,sizeof(k1),compare);

    count=0;
    for(i=0;i<n;)
    {
    j=i+1;
    while(j<n&&k[i].b>=k[j].a)
    j++;
    i=j;
    count++;
    }

    printf("%d\n",count);

    }

    return 0;
    }
