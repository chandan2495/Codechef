#include<stdio.h>
#include<iostream>
#include<limits.h>
#include<string.h>

using namespace std;
int main() {
	int n,b,h,w,p,beds[15],min=0,i,j,curr=0,flag=0;
	while(scanf("%d%d%d%d",&n,&b,&h,&w)!=EOF) {
		min=INT_MAX;
		for(i=0;i<h;i++) {
			scanf("%d",&p);
			curr=0;flag=0;
			for(j=0;j<w;j++) {
				scanf("%d",&beds[j]);
				if(beds[j]>=n)
					flag=1;
			}
			if(flag) {
				curr=(p*n);
				if(curr<=b&&min>curr)
					min=curr;
			}			
		}
		if(min==INT_MAX)
			printf("stay home\n");
		else
			printf("%d\n", min);
	}
	return 0;
}