#include<stdio.h>
#include<iostream>
#include<map>
#include<string.h>
#include<utility>

using namespace std;
int main()
{
int t,g1,g2,p;
string s1,s2;
scanf("%d",&t);
while(t--)
{
map<string, int> m;
p=16;
while(p--)
{
 cin>>s1>>s2;
 scanf("%d%d",&g1,&g2);
 m.insert(pair<string,int>(s1,0));
 m.insert(pair<string,int>(s2,0));
 if(g1>g2)
        m[s1]++;
 else
    m[s2]++;
}
for(map<string,int>::iterator ii=m.begin();ii!=m.end();++ii)
{
    if((*ii).second==4)
        cout<<(*ii).first;
}
printf("\n");
}
return 0;
}
