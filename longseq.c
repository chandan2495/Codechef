#include<stdio.h>
 int main() {
 	int t,zeros,ones,i;
 	char s[100001];
 	scanf("%d\n",&t);
 	while(t--) {
 		scanf("%s",s);
 		i=0;zeros=ones=0;
 		while(s[i]) {
 			zeros += s[i]=='0'?1:0;
 			ones += s[i]=='1'?1:0;
 			i++;
 		}
 		if (zeros==1 || ones==1)
 			printf("Yes\n");
 		else
 			printf("No\n");
 	}
 	return 0;
 }