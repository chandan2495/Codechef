#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int t, snakes, mongooses,n;
	string s;
	scanf("%d\n",&t);
	while(t--) {
		cin>>s; 
		n = s.length();
		snakes = mongooses = 0;
		for (int i = 0; i < n; ++i)
		{
			if (i>0&&s[i-1]=='s'&&s[i]=='m') {
				snakes--; mongooses++; s[i]='.';
			} else if (i>0&&s[i-1]=='m'&&s[i]=='s') {
				s[i]='.';
			} else if (s[i]=='s') {
				snakes++;
			} else if (s[i]=='m') {
				mongooses++;
			}
		}
		if (snakes==mongooses) {
			printf("tie\n");
		} else if (snakes < mongooses) {
			printf("mongooses\n");
		} else {
			printf("snakes\n");
		}
	}
	return 0;
}