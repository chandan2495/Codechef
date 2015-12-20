#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[]={1,2,3,5},n;
	n=(int)(&arr+1)-((int)&arr[0]);
	printf("%d",n);


	return 0;
}
