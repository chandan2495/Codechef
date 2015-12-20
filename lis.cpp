#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int n,a[1000010],h[1000010]={0};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,count=0;
    set<int> s;
    set<int>::iterator it;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        h[a[i]]++;
        if(h[a[i]]>1)
            count++;
    }
    s.clear();
    for(i=0;i<n;i++)
    {
      s.insert(a[i]);
      it=s.find(a[i]);
        it++;
        if(it!=s.end())
            s.erase(it);
    }

    printf("%d\n%d\n",s.size(),count);
    return 0;
}
