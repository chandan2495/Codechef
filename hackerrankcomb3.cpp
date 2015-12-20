#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,a[1000],i,j,pro;
    scanf("%d",&t);
    while(t--)
        {
        pro=1;
        scanf("%d",&n);
        for(i=0;i<n-1;i++){
            scanf("%d",&a[i]);
            pro=(pro*a[i])%1234567;
        }
        printf("%d\n",pro%1234567);
    }
    return 0;
}
