#include <stdio.h>
#include<string.h>

int pallin(char c[])
{
	 int i,j,len;
	 len=strlen(c);
	 for(i=0,j=len-1;i<j;i++,j--)
	 {
	 	if(c[i]==c[j])
	 	continue;
	 	else
	 	break;
	 }
	 if(i>=j)
	 return 1;
	 else
	 return 0;
}

int main()
{
	int t,n,flag,i;
	char c[150];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",c);
		flag=1;
		i=0;
		while(c[i])
		{
		 	if(c[i]=='0'||c[i]=='1'||c[i]=='8');
			else{
			flag=0;
			break;}
			i++;
		}
		if(flag==1){
		if(pallin(c))
		printf("YES\n");
		else
		printf("NO\n");
		}
		else{
		printf("NO\n");
		}


	}
    return 0;
}
