#include<stdio.h>

int a[1000001];
int getint()
{
    int n=0,c=0;
    while((c=getchar())<33);
    while(c>='0'&&c<='9')
    {
        n=(n<<3)+(n<<1)+c-'0';
        c=getchar();
    }
    return n;
}

typedef long long ll;
int main()
{
 int t,n,i;
 ll count,count2,res,cal,count3;
 t=getint();
 //scanf("%d",&t);
 while(t--)
 {
 count=0, count2=0;
 n=getint();
  //scanf("%d",&n);
  for(i=0;i<n;i++){
        a[i]=getint();
  //scanf("%d",&a[i]);
  if(a[i]==0||a[i]==1)
  count++;
  if(a[i]==2)
  count2++;
  }
  res=0;
  cal=n-count;
  if(cal>1)
  {
   res=cal*(cal-1);
   res=res/2;
  }
  count3=0;
  if(count2>1)
  {
   count3=count2*(count2-1);
   count3=count3/2;
  }
  if((res-count3)>0)
  printf("%lld\n",res-count3);
  else
  printf("0\n");
 }
 return 0;
}
