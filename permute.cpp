// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>
#include<math.h>

using namespace std;
int main () {
  int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},d=3,count=0,n=16,t1,t2,t3,t4,t5,t6,t7,t8,i;

  sort (a,a+n);

  cout << "The 8! possible permutations with 8 elements:\n";
  do {

    //cout <<a[i] << ' ';
        if(a[0]>a[1])
            t1=a[0];
        else
            t1=a[1];
        if(a[2]>a[3])
            t2=a[2];
        else
            t2=a[3];
        if(a[4]>a[5])
            t3=a[4];
        else
            t3=a[5];
        if(a[6]>a[7])
            t4=a[6];
        else
            t4=a[7];

        if(a[8]>a[9])
            t5=a[8];
        else
            t5=a[9];
        if(a[10]>a[11])
            t6=a[10];
        else
            t6=a[11];
        if(a[12]>a[13])
            t7=a[12];
        else
            t7=a[13];
            if(a[14]>a[15])
            t8=a[14];
        else
            t8=a[15];


        if(t1<t2)
            t1=t2;
        if(t3<t4)
            t3=t4;
        if(t5<t6)
            t5=t6;
        if(t7<t8)
            t7=t8;


        if(t1<t3)
            t1=t3;
        if(t5<t7)
            t5=t7;

        if(t1==d||t5==d)
            count++;

  //cout<<endl;
  } while ( next_permutation(a,a+n) );

  for(i=0;i<n;i++)
    cout << a[i] << ' ';
  cout<<endl;
  cout<<count;

  return 0;
}
