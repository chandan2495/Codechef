#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int l,i;
	string prev,curr,next;
	while(scanf("%d",&l)&&l>0) {
		prev="+x";
		next="";
		cin>>curr;
		i=1;
		while(i<l-1 && curr[0]=='N') {
				cin>>curr;
				i++;
		}
		if(curr[0]!='N') {
			next = curr;
			prev = curr;	
		} else {
			next = prev;
		}	
		for(;i<l-1;) {
			// printf("%d %s\n", i, curr.c_str());
			cin>>curr;
			i++;
			while(i<l-1 && curr[0]=='N') {
				// printf("%d %s\n", i, curr.c_str());
				cin>>curr;
				i++;
			}
			if(curr[0]=='N') {
				next = prev;
				break;
			}
			if (prev == "+x") {
				next = curr;
				prev = curr;
			} else if (prev == "-x") {
				// next = (curr[0]=='-'? "+" : "-") + curr[1];
				if (curr[0]=='-')
					next = "+" + curr[1];
				else
					next = "-" + curr[1];
				prev = next;
			} else if (prev[1]!=curr[1]) {
				next = prev;
				prev = next; 
			} else if(prev == curr) {
				next = "-x";
				prev = "-x";
			} else if (prev[1]==curr[1] && prev[0]!=curr[0]){
				next = "+x";
				prev = "+x";
			}
		}
		if(next!="")
			cout<<next;
		else
			printf("empty\n");
	}
	return 0;
}