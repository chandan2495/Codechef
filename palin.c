#include<stdio.h>
#include<string.h>

int allnines(char *s)
{
    int i=0;
    while(s[i])
    {
        if(*s=='9');
        else
            return 0;
        s++;
    }
    return 1;
}

int main()
{
int t,n,i,mid,j,leftsmall;
char s[1001000];

scanf("%d\n",&t);

while(t--)
{
scanf("%s",s);
n=strlen(s);
if(allnines(s))
{
 printf("1");
 for(i=1;i<n;i++)
 printf("0");
 printf("1\n");
}
else
{
 mid=n/2;

 leftsmall=0;
 i=mid-1;
 j=n%2?mid+1:mid;

 while(i>=0&&s[i]==s[j])
 i--,j++;

 if(i<0||s[i]<s[j])
 leftsmall=1;

 while(i>=0)
 s[j++]=s[i--];

 if(leftsmall==1)
 {
 int carry=1,temp;
  i=mid-1;
  if(n%2==1)
  {
   temp=s[mid]-'0';
   temp+=carry;
   carry=temp/10;
   temp=temp%10;
   s[mid]=temp+'0';
   j=mid+1;
  }
  else
  j=mid;

  while(i>=0)
  {
   temp=s[i]-'0';
   temp+=carry;
   carry=temp/10;
   temp=temp%10;
   s[i]=temp+'0';
   s[j]=s[i];
   j++,i--;
  }
 }
 printf("%s\n",s);
}

}

return 0;
}
