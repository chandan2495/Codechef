#include<stdio.h>

int main()
    {

    int n,a[10010],i,count=0,j,temp,key,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        j=i-1;
        key=a[i];

        while(j>=0&&key<a[j]){
            a[j+1]=a[j];j--;count++;
            }

         a[j+1]=key;
    }
printf("%d\n",count);
    return 0;
}
