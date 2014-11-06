#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Time
{
    public:
    string whatTime(int n)
    {
        string s1="";
        int temp,h,m,s;
      temp=n/60;
    h=temp/60;
    m=temp%60;
    s=n%60;

 //snprintf(s1,100,"%d:%d:%d",h,m,s);
 s1=to_string(h)+':'+to_string(m)+':'+to_string(s);

   return s1;
    }
};


int main()
{
    Time t;
    string s;
    s=t.whatTime(3621);
    cout<<s;
}
