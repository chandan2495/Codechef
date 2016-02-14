#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,i,ans=0,prevR=0,currK=0,count=0,maxK,rflag=0,kflag=0,nextK=0,prevK=0;
	char s[1000010];
	scanf("%d\n",&t);
	while(t--){
		ans=0,prevR=0,currK=0,maxK=0,rflag=0,kflag=0,nextK=0,prevK=0;
		scanf("%s",s);
		// printf("size %d\n", strlen(s));
		i=0;
		while(s[i]){
			if(s[i]=='R'){
				if(kflag==1){
					kflag=0;
					if(nextK>=prevR){
						currK+=prevK;					
						ans-=prevR;
					}					
					nextK=0;	
					prevR=0;			
					prevK=0;	
				}
				if(currK>0||rflag==1){	
					prevK=currK;				
					prevR++;
					rflag=1;
				}

				maxK=maxK>currK?maxK:currK;
				ans++;
				currK=0;
			}
			else{
				if(rflag==1||kflag==1){
					rflag=0;
					kflag=1;
					nextK++;
				}
				currK++;
			}
			i++;
		}
		if(nextK>=prevR)
		{
			currK+=prevK;
			ans-=prevR;
		}
		maxK=maxK>currK?maxK:currK;
		if(maxK>0)
			printf("%d\n",ans+maxK );
		else
			printf("%d\n",ans-1);
	}
	return 0;
}