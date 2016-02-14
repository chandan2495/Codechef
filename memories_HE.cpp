#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,p,a,b,pw,par[10000][2],count=0,currSet[10001],k,temp,l;
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d%d",&n,&p);
		pw=pow(2,n);
		for (int i = 0; i < p; ++i)
		{
			scanf("%d%d",&par[i][0],&par[i][1]);			
		}
		for (int i = 1; i < pw; ++i)
		{
			k=0;
			for (int j = 0; j < n; ++j)
			{
				if(((1<<j)&i)!=0){
					currSet[j+1]=1;
				}
				else
					currSet[j+1]=0;
			}
			// printf("CurrentSet\n");
			// for (int k = 0; k < n; ++k)
			// {
			// 	if(currSet[k+1]==1)
			// 		printf("%d ", k+1);
			// }
			for (l = 0; l < p; ++l)
			{
				if(currSet[par[l][0]]==1&&currSet[par[l][1]]==1)
					break;			
			}
			// printf("\nl %d p %d\n",l,p);
			if(l==p)
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}