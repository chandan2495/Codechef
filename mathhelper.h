class MathHelper
{
public:
	int multiplyIntegers(int a, int b, int mod);
	long long multiplyLong(long long a, long long b, long long mod);
	long long pow_mod(long long a, long long b, long long mod);
	int gcd(int a,int b);
};


int MathHelper:: multiplyIntegers(int a, int b, int mod) {
	int res=0;
	while(b>0) {
		if(b&1)
			res=(res+a)%mod;
		a=a<<1;
		if(a>mod) 
			a=a%mod;
		b=b>>1;
	}
	return res%mod;
}

long long MathHelper:: multiplyLong(long long a, long long b, long long mod) {
	long long res=0;
	b=b%mod;
	while(b>0) {
		if(b&1)
			res=(res+a)%mod;
		a=a<<1;
		if(a>mod) 
			a=a%mod;
		b=b>>1;
	}	
	return res%mod;
}

long long MathHelper::pow_mod(long long a, long long b, long long mod) {
	long long res=1;
	while(b>0) {
		if (b&1)
			res=multiplyLong(res,a,mod);
		a=multiplyLong(a,a,mod);
		b=b>>1;
	}
	return res;
}

int MathHelper::gcd(int a,int b) {
	return b?gcd(b,a%b):a;
}