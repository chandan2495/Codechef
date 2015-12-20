#include<stdio.h>
#include<string.h>

int main()
{
char s[100],s1[100];
int i,j,n,count=0,k=0,l=0;

scanf("%s",s);
n=strlen(s);
for(i=0,j=n-1;i<=j;i++,j--)
{
 if(s[i]!=s[j])
 count++;
}
if(count==0)
{
     for(i=0;i<=(n/2);i++)
     {
         printf("%c",s[i]);
     }
     printf("%c",s[i-1]);
     for(;i<n;i++)
        printf("%c",s[i]);
     printf("\n");
}
else if(count>0)
{
k=0,l=n;

for(i=0,j=n-1;i<=j;)
{
    if(s[i]!=s[j]){
        s1[l--]=s[i];
        s1[k++]=s[i];
        i++;
    }
    else
    {
        s1[k]=s[i];
        k++;
        s1[l]=s[j];
        l--;
        i++,j--;
    }
}
count=0;
for(i=0,j=n;i<=j;i++,j--)
{
 if(s1[i]!=s1[j])
 count++;
}
if(count==0)
printf("%s\n",s1);
else
    printf("NA\n");
 /*for(i=1,j=n-1;i<=j;i++,j--)
 {
 if(s[i]!=s[j])
 break;
 }
 if(i>j)
 printf("%s%c\n",s,s[0]);
 else{
 for(i=0,j=n-2;i<=j;i++,j--)
 {
 if(s[i]!=s[j])
 break;
 }
 if(i>j)
 printf("%c%s\n",s[n-1],s);
 else
    printf("NA\n");
 }*/
}
else
 printf("NA\n");

return 0;
}
