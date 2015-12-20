#include<bits/stdc++.h>

boolean compare(char a,char b)
{
    return a-b;
}

int main()
{
int t;
string s;
scanf("%d",&t);
while(t--)
{
cin>>s;
sort(s.begin(),s.end());
do{
printf("%s\n",((string)s).c_str());
}while(next_permutation(s.begin(),s.end()));
}
return 0;
}
