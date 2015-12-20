#include<bits/stdc++.h>

using namespace std;
int main(){

int t,r1,r2,ql,qr,q,i,j,k;
string s,os,temp;
cin>>s;
os=s;
reverse(s.begin(),s.end());
scanf("%d",&q);
while(q--)
{
scanf("%d%d%d%d",&r1,&r2,&ql,&qr);
temp=s;
for(i=ql-1;i<=qr-1;i++)
{
    if(i>=r1-1&&i<=r2-1){
        s[qr-1-i]=os[r2-1-r1-1-i];
        if(os[i]!=s[i])
        break;
    }
    else{
        if(s[i]!=os[i])
        break;
    }
}
if(i==qr)
    printf("Yes\n");
else
    printf("No\n");

}

return 0;
}
