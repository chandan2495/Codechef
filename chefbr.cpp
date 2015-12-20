#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
int t,n,a[105],count=0,i,j,p;
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
     // printf("%d ",a[j]);
   if(a[j]<0)
   s.push(a[j]);
   else
   {
    if(!s.empty())
    {
     t=s.top();
     t=t*-1;
     s.pop();
     if(t!=a[j])
     break;
    }
    else
        break;
   }
  }
 }
 if(j==n&&s.empty()){
        //printf(" ooo\n");
 count++;
 }
//printf("\n");
 while(!s.empty())
    s.pop();
}

printf("%d\n",count);

return 0;
}
