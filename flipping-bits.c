#include<stdio.h>

int main() {
	int t;
	unsigned int n;
	scanf("%d",&t);
	while(t--) {
		scanf("%u",&n);
		printf("%u\n", ~n);
	}
	return 0;
}