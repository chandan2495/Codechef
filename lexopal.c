#include<stdio.h>
#include<string.h>

int main() {
	int t,i,n,flag=0;
	char s[15555];
	scanf("%d\n",&t);
	while(t--) {
		scanf("%s",s);
		n=strlen(s);flag=0;
		for (i=0;s[i];i++) {
			if (s[i]=='.') {
				if (n%2!=0 && i==(n-1)/2) {
					s[i]='a';
				}
				else if (s[n-1-i]!='.') {
					s[i]=s[n-1-i];
				}
				else {
					s[i]='a';
				}
			}			
		}
		// printf("before %s\n", s);
		// check for pallindrome
		for (i=0;i<=(n/2);i++) {
			if (s[i]!=s[n-1-i]) {
				flag=1;
				break;
			}
		}
		if (flag==0)
			printf("%s\n", s);
		else
			printf("-1\n");
	}
	return 0;
}