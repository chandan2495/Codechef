#include <bits/stdc++.h>

using namespace std;

int howManyCollisions(string s){
    int n = s.length();
    vector<int> left(n,0);
    vector<int> right(n,0);
    int leftCount = 0, rightCount = 0;
    int totalCollisions = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'l' || s[i] == 'd') {
            right[i] = 0;
        } else {
            right[i]=(i>0? right[i-1] : 0) + 1;
        }
    }
    for (int i = n-1; i > 0; --i)
    {
        if (s[i] == 'r' || s[i] == 'd') {
            left[i] = 0;
        } else {
            left[i]=(i<n-1? left[i+1] : 0) + 1;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        leftCount = i<n-1 ? left[i+1] : 0;
        rightCount = i>0? right[i-1] : 0;
        if (s[i] == 'd') {            
            totalCollisions+=leftCount + rightCount;
        } else if (s[i]=='l' && (i>0 && s[i-1] == 'r')) {
            totalCollisions+=2;
            totalCollisions+=(leftCount + rightCount - 1);
        }
    }
    return totalCollisions;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // Returns the number of times moving robots collide.
        int result = howManyCollisions(s);
        cout << result << endl;
    }
    return 0;
}
