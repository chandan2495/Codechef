#include <bits/stdc++.h>

using namespace std;

int maxLen(string s){
    int res = 0, n=s.length(),a[26]={0},k=0;
    string temp; string availableChars="";
    for (int i = 0; i < n; ++i)
    {
    	if (a[s[i]-'a']==0) {
    		availableChars+=s[i];
    	}
    	a[s[i]-'a']++;
    }   
    for (int i = 0; i < availableChars.length(); ++i)
    {
    	for (int j = i+1; j < availableChars.length(); ++j)
    	{
    		temp = "";
    		for (k = 0; k < n; ++k)
    		{
    			if (s[k]==availableChars[i] || s[k]==availableChars[j]) {
    				temp+=s[k];
    			}
    		}
    		for (k = 2; k < temp.length(); ++k)
    		{
    			if (temp[k]!=temp[k-2])
    				break; 
    		}    		
    		if (k==temp.length()) {
    			int tempLength = temp.length();
    			res = max(res, tempLength);
    		}
    	}
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = maxLen(s);
    cout << result << endl;
    return 0;
}
