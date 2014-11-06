#include<stdio.h>
#include<string.h>

int a[1000100];
int main()
{
int t,n,i,j,start,end,flag;
char r[100][2],s[1000100];
scanf("%d",&t);
while(t--)
{
    memset(a,0,sizeof(a));
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%c %c\n",&r[i][0],&r[i][1]);

scanf("%s",s);

for(i=0;i<n;i++)
{
 j=0;
 while(s[j])
 {
     if(a[j]==0&&s[j]==r[i][0])
     {
         s[j]=r[i][1];
         a[j]=1;
     }
     j++;
 }
}
start=-1;
i=j=0;
while(s[i]&&s[i]=='0')
i++;
if(s[i])
start=i;
end=0;flag=0;
while(s[i])
{
    if(s[i]=='.'){
        end=i-1;
        flag=1;
    }
    else if(flag==1&&s[i]!='0')
        end=i;

        i++;
}
if(flag==0&&start!=-1)
    end=i-1;
       if(start==-1)
        printf("0");
       else if(start>end)
        printf("0");
    else{
for(i=start;i<=end;i++)
    printf("%c",s[i]);
    }
printf("\n");

}

return 0;
}
