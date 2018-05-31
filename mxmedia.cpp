#include<bits/stdc++.h>

using namespace std;

int main() {
  int t,n,temp,res;
  std::vector<int> v;
  scanf("%d", &t);
  while (t--) {
    v.clear();res=0;
    scanf("%d",&n);
    for (int i = 0; i < 2*n; i++) {
      scanf("%d",&temp);
      v.push_back(temp);
    }
    sort(v.begin(), v.end());
    temp = (n + 2*n)/2;
    printf("%d\n", v[temp]);
    for (int i = 0,j=n,k=0; j<2*n;k++) {
      if (k%2==0) {
        printf("%d ", v[i]);
        i++;
      }
      else {
        printf("%d ", v[j]);
        j++;
      }
    }
    printf("\n");
  }
  return 0;
}
