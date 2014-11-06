// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

using namespace std;
int main () {
  int myints[] = {1,2,3,4},i;

  sort (myints,myints+4);

  cout << "The 4! possible permutations with 3 elements:\n";
  do {
        for(i=0;i<4;i++)
    cout << myints[i] << ' ';
  cout<<endl;
  } while ( next_permutation(myints,myints+4) );

  for(i=0;i<4;i++)
    cout << myints[i] << ' ';
  cout<<endl;

  return 0;
}
