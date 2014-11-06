#include<iostream>
using namespace std;

class Empty {int a[0];};

int main()
{
    int a[0];
    a[0]=4;
  cout << sizeof(Empty);
  cout << sizeof(a);
  cout<< sizeof(a[0]);
  cout<<a[0];
  return 0;
}
