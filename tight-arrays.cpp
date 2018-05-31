#include <bits/stdc++.h>

using namespace std;

int shortestTightArray(int a, int b, int c){
    int result = 0;
    result = abs(b-a) + 1;
    result += abs(b-c);
    return result;
}

int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int result = shortestTightArray(a, b, c);
    cout << result << endl;
    return 0;
}
