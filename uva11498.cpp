#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int k,x,y,x1,y1;
	while(scanf("%d",&k)&&k!=0){
		scanf("%d%d",&x,&y);
		while(k--) {
			scanf("%d%d",&x1,&y1);
			if(x==x1 || y==y1)
				printf("divisa\n");
			else if(x>x1&&y>y1)
				printf("SO\n");
			else if(x>x1&&y<y1)
				printf("NO\n");
			else if(x<x1&&y>y1)
				printf("SE\n");
			else
				printf("NE\n");			
		}
	}
	return 0;
}