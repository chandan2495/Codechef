#include<stdio.h>

int main()
    {
    int n,a[1001][50],i,j,k,carry,sum,b[10000],count;
    char c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        for(j=0;j<50;j++){
        scanf("%c",&c);
            a[i][j]=c-'0';
        }

        getchar();
    }

    carry=0; k=0;
        for(j=49;j>=0;j--){sum=0;
               for(i=0;i<n;i++){
                sum+=a[i][j];
               }

                    sum+=carry;
                      if(sum>9)
                       carry=sum/10;
                      else
                          carry=0;

                 b[k++]=sum%10;
        }
    if(carry>0)
        {
        while(carry)
            {
            b[k++]=carry%10;
            carry=carry/10;
        }
    } count=0;
    for(i=k-1;i>=0&&count<10;i--,count++)
    printf("%d",b[i]);
    return 0;
}
