#include<stdio.h>

char small(char c)
{

    return c<97?c+32:c;
}

int main()
{
int t,m,n,i,j,k,l;
char s[102][102],pat[]={"spoon"};

scanf("%d",&t);
while(t--)
{

 scanf("%d%d\n",&m,&n);
 for(i=0;i<m;i++){
 scanf("%s",s[i]);
 }

 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
        if(small(s[i][j])=='s')
        {
            for(l=j+1,k=1;l<n&&k<5;l++,k++)
             if(small(s[i][l])!=pat[k])
             break;

            if(k==5)
            break;
            else
            {
                for(l=i+1;l<m&&k<5;l++,k++)
                 if(small(s[l][j])!=pat[k])
                 break;

                if(k==5)
                break;

            }
        }
    }
    if(j!=n)
    break;
 }

 if(i==m)
 printf("There is indeed no spoon!\n");
 else
    printf("There is a spoon!\n");

}

return 0;
}
