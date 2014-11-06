#include<iostream>
using namespace std;
class x
{
    public :
         x(){}
         int func() const
         { cout <<"it is const function "; }
         int func(){ cout <<"it is simple function "; } };
         int main() { x a; a.func(); return 0; }
