#include<stdio.h>

typedef long long ll;
int main()
{
int t,a[11],i,flag;
ll min,temp,powten=0;
scanf("%d",&t);

while(t--)
{
    flag=0; min=10000;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
if(a[i]==0){
if(i!=0){
if(min>i)
min=i;
flag=1;
}
else
{
 min=10;
 flag=1;
}
}
}
if(flag==0)
{
powten=1;
 while(a[0]!=0)
 {
  powten=powten*10;
  a[0]--;
 }
min=powten;
for(i=1;i<10;i++)
{
temp=0;
 while(a[i]!=-1)
 {
  temp=temp*10+i;
  a[i]--;
 }
 if(min>temp)
 min=temp;
}

}
printf("%lld\n",min);
}
return 0;
}
