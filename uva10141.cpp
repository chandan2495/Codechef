#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<float.h>


#define eps 0.00000001

using namespace std;

int main() {
	int n,p,i,j,cas=1;
	double comp=0,pr,r,temp,bestPr=0;
	string s,bp;
	scanf("%d%d",&n,&p);
	getchar();
	while(1) {		
		comp=0;
		bestPr=DBL_MAX;
		bp = "";
		for(i=0;i<n;i++)
			getline(cin,s);
		for(i=0;i<p;i++) {
			getline(cin,s);		
			scanf("%lf%lf",&pr,&r);
			getchar();
			if(!(fabs(r-n)<eps)) {
				temp = r/(double)n;
				if((temp-comp)>eps) {
					comp = temp;
					bestPr = pr;
					bp = s;
				} else if(fabs(temp-comp)<eps) {
					if((bestPr-pr)>eps) {
						bp=s;
						bestPr = pr;
					}
				}
			} else {
				if((n-comp)>eps || (bestPr-pr)>eps) {
					bestPr = pr;
					comp=n;
					bp = s;
				}
			}
			for(j=0;j<r;j++) 
				getline(cin,s);								
		}
		printf("RFP #%d\n%s\n",cas,bp.c_str());
		scanf("%d%d",&n,&p);
		if(n&&p) {
			getchar();
			printf("\n");
		}
		else
			break;
		cas++;
	}
	return 0;
}