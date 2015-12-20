#include<bits/stdc++.h>

using namespace std;
int main()
{
map<string,int> m;
string s;
int n;
cin>>n;
while(n--){
 cin>>s;
 s1=s.substr(0,s.find(" "));
 printf("%s\n",s1);
 if(m.find(s1)==m.end())
  m[s1]=1;
 else
  m[s1]++;
}

for(map<string,int>::iterator it=m.begin;it!=m.end();it++)
{
printf("%s %d\n", ((string)it->first).c_str(), it->second);
}

return 0;
}
