#include<bits/stdc++.h>

using namespace std;
bool compare(char a,char b)
{
    bool capsA=false,capsB=false;
    if(a>='A'&&a<='Z')
        capsA=true;
    if(b>='A'&&b<='Z')
        capsB=true;
    if(capsA&&capsB)
        return a<=b;
    if(!capsA&&!capsB)
        return a<=b;
    else{
        if(!capsA){
            a=a-32;
            return a<=b;
        }
        else
        {
            b=b-32;
            return a<=b;
        }
    }
}

int main()
{
int t;
string s;
scanf("%d",&t);
while(t--)
{
cin>>s;
sort(s.begin(),s.end(),compare);
do{
printf("%s\n",((string)s).c_str());
}while(next_permutation(s.begin(),s.end(),compare));
}
return 0;
}
