#include<stdio.h>
#include<string.h>

int main()
{
int t,i,a[26],max,b[26],l,g,j;
char s[1010];
scanf("%d",&t);
while(t--)
{
 for(i=0;i<26;i++){
 a[i]=0;b[i]=0;
 }
 scanf("%s",s);
 i=0;
 while(s[i])
 {
  a[s[i]-'a']++;
  i++;
 }
 max=0;
 for(i=0;i<26;i++)
 {
     g=0;l=0;
     if(a[i]>0){
     for(j=i+1;j<26&&a[j]<a[i];j++)
     {   if(a[j]>0&&max<=a[j])
         l++;
     }
     if(l>0)
        b[i]=0;
     else if(max<=a[i]){
        b[i]=1;
        //printf("%c %d\n",i+'a',max);
        max=a[i];
     }
     }
 }
 max=0;
 for(i=0;i<26;i++)
 {
  if(b[i]!=0&&max<=b[i])
  {
   printf("%c",i+'a');
   max=b[i];
  }
 }
 printf("\n");
}
return 0;
}
