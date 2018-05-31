#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s,res="";
    cin>>s;vector<char> last;    
    int n = s.length(),i;
    if (n>0) {
    	last.push_back(s[i]);
    }
    for (i = 1; i < n; ++i)
    {
    	if (s[i]==last.back()) {
    		last.pop_back();
    	} else {
    		last.push_back(s[i]);
    	}
    }
    for (int i = 0; i < last.size(); ++i)
    {
    	res+=last[i];
    }
    if (res.length()==0) {
    	printf("Empty String\n");
    } else {
    	printf("%s\n", res.c_str());
    }
    return 0;
}
