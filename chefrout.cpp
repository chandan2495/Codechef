#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int t;string s;
	scanf("%d\n",&t);
	while(t--) {
		cin>>s;
		int countc=0,counte=0,counts=0,i;
		for (i = 0; i < s.length(); ++i)
		{			
			if (s[i]=='C' && (counte>0 || counts>0))
				break;
			else if (s[i]=='E' && (counts>0))				
				break;
			countc += s[i]=='C'?1:0;
			counte += s[i]=='E'?1:0;
			counts += s[i]=='S'?1:0;
		}
		if (i!=s.length())
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}
