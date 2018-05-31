#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int h,i,j,days=0;
	double u,d,f,currH=0,u1;
	while(scanf("%d%lf%lf%lf",&h,&u,&d,&f)&&h>0) {
		days=0;
		u1=u*(f/100.0);
		currH=0.0;
		while (currH<=h) {
			// printf("%lf\n", currH);
			if(u>0)
				currH+=u;
			days++;
			if(currH>h)
				break;
			currH-=d;
			u=u-u1;
			if(currH<0)
				break;
		}
		if(currH>0)
			printf("success on day %d\n", days);
		else
			printf("failure on day %d\n", days);
	}
	return 0;
}