#include<stdio.h>
#include<string.h>

int compare(int *a, int *b) {
	return *b-*a;
}

int main() {
	int t,n,player[1000],i,j,score[1000]={0},type,types[10]={0},addtnal=0,maxi,max=0,flag=0,count;
	scanf("%d",&t);
	while(t--) {		
		memset(score,0,sizeof(score));
		scanf("%d",&n);
		max=0;maxi=-1;flag=0;
		for(i=0;i<n;i++) {
			memset(types,0,sizeof(types));
			scanf("%d",&player[i]);
			score[i] = player[i];
			for(j=0;j<player[i];j++) {
				scanf("%d",&type);
				types[type-1]++;
			}
			qsort(types,6,sizeof(int),compare);
			// for(j=0;j<=5;j++)
			// 	printf("%d ", types[j]);
			// printf("\n");
			while (1) {
				count=0;
				for(j=0;j<6;j++) {
					if (types[j]>0)
						count++;
				}
				if (count>=4) {
					score[i]+= (count==4?1:(count==5?2:4));
					for(j=0;j<6;j++) {
						if (types[j]>0)
							types[j]-=1;
					}
				} else {
					break;
				}
			}			
			if (max<score[i]) {
				max=score[i];
				maxi=i;
				flag=0;
			} else if (max==score[i]) {
				flag=1;
			}
		}
		// printf(" max %d\n", max);
	 	if (flag==1)
			printf("tie\n");		
		else if (maxi==0)
			printf("chef\n");
		else
			printf("%d\n", maxi+1);
	}
	return 0;
}