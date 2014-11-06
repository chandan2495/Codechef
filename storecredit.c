#include<stdio.h>
#include<string.h>

int abs(int a)
{
    return a<0?-a:a;
}

int main()
{
int t,n,price[2000],has[1005]={0},c,test=1;
int i;

scanf("%d",&t);
while(t--)
{

memset(has,0,sizeof(has));
scanf("%d",&c);
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&price[i]);
has[price[i]]=i+1;
}
for(i=0;i<n;i++)
{
    if(c>=price[i]){
 if((has[(c-price[i])])!=0){
 if((i+1)<=has[c-price[i]])
 printf("Case #%d: %d %d\n",test,i+1,has[c-price[i]]);
 else
 printf("Case #%d: %d %d\n",test,has[c-price[i]],i+1);

 break;
 }
}
}
test++;
}
return 0;
}
