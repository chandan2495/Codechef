        #include<stdio.h>

    typedef struct k{
    int a;
    int b;
    }k1;

    k1 k[100010];

    int compare(k1 *a,k1 *b)
    {
    if((*a).a==(*b).a)
    return (*a).b-(*b).b;
    return (*a).a-(*b).a;
    }

    int main()
    {
    int t,n,i,count=0,j,min,bomb;

    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d%d",&k[i].a,&k[i].b);

    qsort(k,n,sizeof(k1),compare);
    min=(1<<30);
    count=1;
    for(i=0;i<n;i++)
    {
        bomb=i;
        count=1;
        for(j=0;j<i;j++)
        {
            if(bomb!=j&&(k[bomb].a>=k[j].a||k[bomb].b>=k[j].a))
               continue;
            else
                count++;
        }
        min=min>count?count:min;
    }

    printf("%d\n",min);

    }

    return 0;
    }

