#include <string>
#include <cstdio>
#include <iostream>


using namespace std;

int main(){
    string s;    
    cin >> s;
    int n=s.length();
    int count = 1;
    printf("%d\n", n);
    for(int i=0;i<n;i++) {    
    	printf("%c ", s[i]);    
        if (s[i]>='A' && s[i]<='Z') {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
