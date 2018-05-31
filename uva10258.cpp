#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int , int> pii;
typedef vector< pii > vii;
typedef vector< pii, int > graph;

#define mk_pr(a,b) make_pair(a,b)
#define loop(i,n) for(i=0;i<n;i++)
#define all(c) c.begin(), c.end()
#define iter(container, it) \
		for(typeof(container.begin()) it = container.begin(); it!=container.end(); it++)

struct ranks{
	int c;
	int ps;	
	int tim;
	bool isPart;
};			

int getInput(int &a, int &b, int &c, char &ch) {
	char s[10000];
	gets(s);
	// printf("ab %c", s[0]);
	// while(s[0]=='\n')
	// 	gets(s);
	int count=0,i=0;
	a=b=c=0;
	while(s[i]==' ')
		i++;
	while(s[i]) {
		if(s[i]==' ')
			count++;
		else {
			if (count==0)
				a= a*10 + (s[i] - '0');
			else if (count==1)
				b= b*10 + (s[i] - '0');			
			else if (count==2)
				c= c*10 + (s[i] - '0');
			else if (count==3)
				ch = s[i];
		}
		i++;
	}
	// printf("%d %d %d %c\n",a,b,c,ch);
}

bool compareRanks(const ranks &r1, const ranks &r2) {
	if (r1.ps != r2.ps)
		return r1.ps > r2.ps;
	else if (r1.tim != r2.tim)
		return r1.tim < r2.tim;
	return r1.c < r2.c;
}

int main() {
	int t,c,p,tim,i;
	char ex,res;	
	vector<ranks> v;
	int solved[110][11];
	scanf("%d\n",&t);
	while(t--) {
		v.clear();
		memset(solved,0,sizeof(solved));
		for(i=0;i<102;i++) {
			ranks r;
			r.c = i;
			r.ps = 0;
			r.tim = 0;
			r.isPart = false;
			v.push_back(r);
		}
		while(getInput(c,p,tim,res) && c!=0) {
			if (res=='C' && solved[c][p]!=-1) {
				v[c].tim+=tim + solved[c][p];
				v[c].ps++;
				solved[c][p]=-1;
			} else if (res == 'I' && solved[c][p]!=-1) {
				solved[c][p]+=20;				
			}	
			v[c].isPart = true;		 
		}
		// iter(v, it) {
		// 	printf("%d %d\n", it->c, it->ps);
		// }
		sort(all(v),compareRanks);
		iter(v,it) {
			if (it->isPart) {
				printf("%d %d %d\n",it->c, it->ps, it->tim);
			}
		}
		// if (t>0)
			printf("\n");
	}
	return 0;
}