#include<stdio.h>
#include<iostream>
#include "mathhelper.h"

using namespace std;
#define mod 1000000007

int main(int argc, char const *argv[])
{	
	MathHelper maths; 
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Multiply %d\n", maths.multiplyIntegers(a,b,mod));
	printf("Pow %d\n", maths.pow_mod(a,b,mod));
	printf("GCD %d\n", maths.gcd(a,b));
	return 0;
}