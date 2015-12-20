#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
int t,n,a[105],count=0,i,j;
stack<int> s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

p=(1<<n);
for(i=0;i<p;i++)
{
 for(j=0;j<n;j++)
 {
  if((i>>j)&1)
  {
   if(a[j]<0)
   s.push(a[j]);;
   else
   {
    if(!s.empty())
    {
     t=s.top();
     s.pop();
     if(t!=a[j])
     break;
    }
   }
  }
 }
 if(j==n)
 count++;
}

printf("%d\n",count);

return 0;
}
