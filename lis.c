#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a[1000010],d[1000010]={0};
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,ans,max=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    d[0]=1;
    for(i=1;i<n;i++)
    {
        ans=1;
     for(j=i-1;j>=0;j--)
         if(a[i]>a[j])
         ans=ans>d[j]+1?ans:d[j]+1;

        d[i]=ans;
        if(max<d[i])
            max=d[i];
    }

    printf("%d\n",max);
    return 0;
}
