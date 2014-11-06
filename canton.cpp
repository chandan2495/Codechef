#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;
vector<int> a(10000001);
int main()
{
int t,n,i,j,flag,inc;
j=1;flag=0;inc=0;
for(i=1;i<=10000000;i++)
{
    if(j==1&&flag==0)
        flag=1;
    else if(j==1&&flag!=0)
        j
    if(flag==1)
    {
        a[i]=j;
        j++;
    }
}
return 0;
}
