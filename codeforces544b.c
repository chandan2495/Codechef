#include<stdio.h>
#include<string.h>

int main()
{
int n,k,sq,i,j,oe=0;
char s[120][120];
memset(s,'S',sizeof(s));
scanf("%d%d",&n,&k);
sq=n*n;
if(sq%2==0&&(sq/2)<k)
printf("NO\n");
else if(sq%2!=0&&((sq/2)+1)<k)
printf("NO\n");
else{
  oe=1;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        if(k>0&&oe==1&&j%2==0)
        {
         s[i][j]='L';
         k--;
        }
        else if(k>0&&oe==0&&j%2!=0)
        {
         s[i][j]='L';
         k--;
        }
    }
    oe=!oe;
  }
  printf("YES\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        printf("%c",s[i][j]);
    }
    printf("\n");
  }
}


return 0;
}
