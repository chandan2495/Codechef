#include<stdio.h>
#include<math.h>

#define eps 0.000001

int checkSqrt(int n){
    int sq=(int)sqrt(n);
    return n==(sq*sq);
}


int checkPallin(char a[101][101],int n){
    int i,j,k=0,l,flag=1;
    for(k=0;k<(n/2);k++){
        for(i=0,j=n-1;i<n&&j>=0;i++,j--){
            if(a[k][i]!=a[n-1-k][j]){
                flag=0;
                break;
            }
        }
        for(i=0,j=n-1;i<n&&j>=0;i++,j--){
            if(a[i][k]!=a[j][n-1-k]){
                flag=0;
                break;
            }
        }

        if(flag==0)
            break;
    }
    return flag;
}
/*
int checkPallin(char s[],int n)
{
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        if(s[i]!=s[j])
            return 0;
    }
    return 1;
}*/
int main()
{
char a[101][101],s1[100000],s[100000];
int i,j,n,t,count,idx=1,k;

scanf("%d\n",&t);
while(t--)
{
    gets(s1);
    i=0;j=0;
    while(s1[i]){
        if(s1[i]>96&&s1[i]<123){
            s[j++]=s1[i];
        }
        i++;
    }

    count=j;
    if(checkSqrt(count))
    {
     k=0;
     n=(int)sqrt(count);
     for(i=0;i<n;i++) {
         for(j=0;j<n;j++){
            a[i][j]=s[k++];
         }
     }
     if(checkPallin(a,n))
     {
         printf("Case #%d:\n%d\n",idx,n);
     }
     else{
        printf("Case #%d:\nNo magic :(\n",idx);
     }
    }
    else{
        printf("Case #%d:\nNo magic :(\n",idx);
    }
idx++;
}

return 0;
}

