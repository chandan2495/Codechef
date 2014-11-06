    #include<stdio.h>
    typedef long long ll;

    ll merge(int a[],int left,int mid,int right)
    {
     int i,j,k,temp[100011];
     ll inv=0;
     k=i=left;
     j=mid+1;
     while(i<=mid&&j<=right)
     {
      if(a[i]<=a[j])
      temp[k++]=a[i++];
      else
      {
      temp[k++]=a[j++];
      inv+=(mid-i)+1;
      }
     }
     while(i<=mid)
     temp[k++]=a[i++];
     while(j<=right)
     temp[k++]=a[j++];
     for(i=left;i<=right;i++)
     a[i]=temp[i];

    return inv;
    }

    ll mergesort(int a[],int left,int right)
    {
    int mid;
    ll inv=0;
    if(right>left)
    {
    mid=(left+right)/2;
    inv+=mergesort(a,left,mid);
    inv+=mergesort(a,mid+1,right);

    inv+=merge(a,left,mid,right);
    }
    return inv;
    }



    int main()
    {
    int n,q,b[100100],i,l,r,temp,a[100010];

    scanf("%d%d",&n,&q);

    for(i=0;i<n;i++)
    scanf("%d",&b[i]);

    while(q--)
    {
     scanf("%d%d",&l,&r);
     l--,r--;
     temp=b[l];
     b[l]=b[r];
     b[r]=temp;
     for(i=0;i<n;i++)
        a[i]=b[i];
     printf("%lld\n",mergesort(a,0,n-1)%2);
    }

    return 0;
    }
