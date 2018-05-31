#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int t,n,snake=0,i;
	char s[100010];
	scanf("%d",&t);
	while(t--) {
		scanf("%d\n",&n); snake = 0;
		scanf("%s",s);
		for (i = 0; i < n; ++i)
		{			
			if (s[i]=='H') {
				snake++;
			} else if (s[i]=='T') {
				snake--;
			}
			if (snake>1 || snake<0) {
				break;
			}
		}
		if (i==n&&snake==0) 
			printf("Valid\n");
		else 
			printf("Invalid\n");
	}
	return 0;
}