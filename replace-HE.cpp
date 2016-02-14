#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,ss[20001],i,n,ad=0,rem=0,curr=0,max=0,ans=0;
	char s[100001];
	scanf("%d\n",&t);
	while(t--){
		memset(ss,0,sizeof(ss));
		scanf("%s",s);
		i=1;
		n=strlen(s);
		if(n<=2){
			printf("0\n");
		}
		else{
			curr=0;max=0;ad=0;rem=0;
			while(i<n-1){
				if(s[i]=='{')
					curr++;
				else{
					max=curr>max?curr:max;
					ss[curr]++;
					curr=0;
				}
				i++;
			}
			for(i=1;i<=max;i++){
				if(ss[i]==0){
					ad++;
				}
				else{
					if(ad>0)
						rem+=ss[i];
				}
			}
			ans=0;
			ans=ad>rem?rem:ad;
			printf("%d\n", ans);
		}
	}
	return 0;
}