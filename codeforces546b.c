#include<stdio.h>
#include<string.h>

int main()
{
int n,a[5000],c[5000]={0},res=0,i,theOne=0,j,max=0;

scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(max<a[i])
max=a[i];
c[a[i]]++;
}
for(i=1;i<=max+1;i++)
{
 if(c[i]==0)
 {
  theOne=i;
  break;
 }
}

for(i=0;i<n;i++)
{
 if(c[a[i]]>1)
 {
  while(c[a[i]]!=1)
  {
   if(theOne<a[i]){
       theOne=a[i]+1;
       while(1)
       {
        theOne++;
        if(c[theOne]==0)
        break;
       }
   }
   res+=theOne-a[i];
   while(1)
   {
        theOne++;
        if(c[theOne]==0)
        break;
   }
  c[a[i]]--;
  }
 }
}

printf("%d\n",res);
return 0;
}
