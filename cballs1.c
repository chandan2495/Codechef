#include<stdio.h>
#include<string.h>
#include<limits.h>

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

int main(int argc, char const *argv[])
{
	int t,n,a[100010],b[100010]={0},pr[100010],i,j,k,minfact=0,allprime=0,gc=0,c[100010],l=0,max=0;
	long long res=0,temp=0,temp1=0;
	b[0]=b[1]=1;
	for (i = 2; i*i<=100000; ++i)
	{
		if(b[i]==0){
			for (j = i*i; j <= 100000; j+=i)
			{
				b[j]=1;
			}
		}
	}
	// get prime numbers in array
	k=0;
	for(i=2;i<=100000;i++){
		if(b[i]==0)
		pr[k++]=i;
	}
	// for (i = 0; i < k; ++i)
	// {
	// 	printf("%d ", pr[i]);
	// }

	scanf("%d",&t);
	while(t--){
		memset(c,0,sizeof(c));
		res=0;
		temp=INT_MAX;
		// printf("%lld\n",temp);
		temp1=0;
		minfact=10000100;
		max=0;
		allprime=1;
		scanf("%d",&n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);			
		}
		// make array non-decreasing
		max=a[0];
		for (i = 1; i < n; ++i)
		{
			if(a[i]<a[i-1])	//Non decreasing order is when the numbers may or may not increase 
			{
				res+=(a[i-1]-a[i]);
				a[i]=a[i-1];
			}
			max=max<a[i]?a[i]:max;
		}
		// check if gcd==1
		gc=a[0];
		for(i=1;i<n;i++)
			gc=gcd(gc,a[i]);
		// printf("gc %d\n", gc);
		if(gc==1){
		// get minimum prime factor among all numbers
			for(j=0;j<k&&pr[j]<=max;j++){	
				temp1=0;			
				if(c[pr[j]]==0){
					for(l=0;l<n;l++){
						if(a[l]%pr[j]!=0){
							temp1+=(pr[j]-(a[l]%pr[j]));
						}
					}
					// printf("prime %d  temp %d\n", pr[j],temp);
					temp=temp>temp1?temp1:temp;
					c[pr[j]]=1;						
				}
			}
			if(temp!=INT_MAX)
				res+=temp;	
			if(max==1)
				res+=n;
		}						
		
		printf("%lld\n", res);
	}
	return 0;
}