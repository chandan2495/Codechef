#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;

typedef long long ll;

char s[1000100];
int main()
{
    int t,i,j,flag=0;
    ll count=0,max=0;
    stack<char> st;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        i=0;count=0; max=0;
         flag=0;
        while(s[i])
        {
            if(s[i]=='<'){
                if(st.empty()){
                max+=count;
                count=0;
                }
                st.push(s[i]);

            }
            else if(s[i]=='>')
            {
                if(!st.empty())
                {   if(st.top()=='<'){
                    count+=2;
                    st.pop();
                    }
                    else
                        break;
                }
                else
                    break;
            }
            i++;
        }
        if(st.empty())
            max+=count;
        if(max>0)
        printf("%lld\n",max);
        else
        printf("0\n");

        while(!st.empty())
        {
            st.pop();
        }
    }

    return 0;
}
