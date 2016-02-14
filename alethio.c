#include<stdio.h>
#include<ctype.h>
#include<string.h>

char max[10010];
int maxage(char s[]){
	char curr[1051];
	int i,j;
	memset(curr,0,sizeof(curr));
		i=0;j=0;;
		while(s[i])
		{		
			if(isdigit(s[i])){
				if(j==0&&s[i]=='0'){
					i++;
					continue;
				}
				else
					curr[j++]=s[i];
			}
			else{						
					// printf("\nComparing %s %s %d\n",max,curr,i);
					if((strlen(max)<strlen(curr))||(strlen(max)==strlen(curr)&&strcmp(max,curr)<0))			
						strcpy(max,curr);		   
					memset(curr,0,sizeof(curr));
					j=0;
			}
			i++;
		}
		// printf("\nComparing %s %s %d\n",max,curr,i);
		if((strlen(max)<strlen(curr))||(strlen(max)==strlen(curr)&&strcmp(max,curr)<0))			
			strcpy(max,curr);
}

int main(){
	char curr[10001],temp;
	int i,used,j,k,l;
	char s[10010];
	scanf("%s",s);
	i=0;used=0;j=0;k=0;l=0;
	while(s[l]){
		if(!isdigit(s[l])){
			temp=s[l];
			s[l]='9';		
			maxage(s);
		 	s[l]=temp;
		}
		l++;
	}	
	
	if(strlen(max)<1){
		maxage(s);
		if(strlen(max)<1){
			printf("0\n");
		}
		else
			printf("%s\n", max);			
	}
	else
		printf("%s\n", max);
	return 0;
}