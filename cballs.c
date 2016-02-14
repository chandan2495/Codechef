#include<stdio.h>

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

int main(int argc, char const *argv[])
{
	int t,n,a[100010],b[100010]={0},pr[100010],i,j,k,minfact=0,allprime=0,gc=0;
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
		res=0;
		temp=0;
		temp1=0;
		minfact=10000100;
		allprime=1;
		scanf("%d",&n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		// make array non-decreasing
		for (i = 1; i < n; ++i)
		{
			if(a[i]<a[i-1])	//Non decreasing order is when the numbers may or may not increase 
			{
				res+=(a[i-1]-a[i]);
				a[i]=a[i-1];
			}
		}
		// check if gcd==1
		gc=a[0];
		for(i=1;i<n;i++)
			gc=gcd(gc,a[i]);
		// printf("gc %d\n", gc);
		if(gc==1){
		// get minimum prime factor among all numbers
			for (i = 0; i < n; ++i)
			{						
				if(b[a[i]]==1){
					for(j=0;j<k&&pr[j]<=a[i];j++){				
						if(a[i]%pr[j]==0&&minfact>pr[j]){
							minfact=pr[j];				
							break;							
						}
					}
					allprime=0;					
				}
				else{
					minfact=minfact>a[i]?a[i]:minfact;
				}
			}
		}		
		if(minfact==10000100)
			minfact=2;
		// if(gc==1&&allprime==1)
		// 	minfact=2;
		if(gc!=1)
			minfact=1;
		// printf("minfact %d\n", minfact);
		for(i=0;i<n;i++){
			if(a[i]%minfact!=0){
				temp+=(minfact-(a[i]%minfact));
			}
		}
		if(allprime==1){
			minfact=2;
			for(i=0;i<n;i++){
				if(a[i]%minfact!=0){
					temp1+=(minfact-(a[i]%minfact));
				}			
			}
			temp=temp>temp1?temp1:temp;
		}
		res+=temp;
		printf("%lld\n", res);
	}
	return 0;
}