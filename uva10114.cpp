#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main() {
	int d, r,i,j,res=0,prev=0,m;
	double dp, la,temp,dep[150],deprec,depamt,installments=0;
	while(scanf("%d%lf%lf%d",&d,&dp,&la,&r)&&d>0){		
		j=0;		
		for(i=0;i<r;i++){
			scanf("%d%lf",&m,&deprec);
			if(m==j)
				dep[j] = deprec;
			else{
				temp = dep[j-1];
				while(j<m)
					dep[j++] = temp;
				dep[j] = deprec;
			}
			j++;
		}
		if (j<=d) {
			temp = dep[j-1];
			while(j<=d)
				dep[j++] = temp;
		}	
		depamt=la+dp;
		depamt=depamt-(depamt*dep[0]);	
		installments=la/(double)d;
		// printf("loan %lf car value %lf\n", la,depamt);
		res=0;	
		if(la>=depamt) {
	 		for (i = 1; i <= d; ++i)
			{
				res++;
				depamt=depamt-(depamt*dep[i]);
				la=la-installments;
				// printf("loan %lf car value %lf\n", la,depamt);
				if(depamt>la)
					break;
			}
		}
		if(res==1)
			printf("%d month\n", res);
		else
			printf("%d months\n", res);
	}
	return 0;
}