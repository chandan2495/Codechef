#include<bits/stdc++.h>

using namespace std;
string toUpperCase(string s)
{
 int i;
 for(i=0;i<s.length();i++)
 {
    s[i]=toupper(s[i]);
 }
 return s;
}

int main()
{
string s,s1;
map< string,pair<string,int> > m;
set<string> res;
pair<string,int> p;
cin>>s;
while(s[0]!='#')
{
 s1=toUpperCase(s);
 sort(s1.begin(),s1.end());
 if(m.find(s1)==m.end())
 {
    p=make_pair(s,0);
    m[s1]=p;
 }
 else
 {
    m[s1].second=m[s1].second+1;
 }
 cin>>s;
}
for (map<string,pair<string,int> >::iterator it = m.begin(); it != m.end(); it++)
{
    if(it->second.second==0){
        res.insert(it->second.first);
    }
}

for(set<string>::iterator it=res.begin();it!=res.end();it++)
    printf("%s\n",((string)*it).c_str());

return 0;
}
