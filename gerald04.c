#include<stdio.h>

int main()
{
int t,dist,min1,h1,h2,min2,i,*temp;
char s[50];
scanf("%d",&t);
while(t--)
{
 min1=0; i=0; h1=0;
 scanf("%s",s);

 temp=&h1;
 while(s[i])
 {
  if(s[i]==':')
  temp=&min1;
  *temp=*temp*10+s[i]-'0';
  i++;
 }

 min2=0; i=0; h2=0;
 scanf("%s",s);

 temp=&h2;
 while(s[i])
 {
  if(s[i]==':')
  temp=&min2;
  *temp=*temp*10+s[i]-'0';
  i++;
 }

 if(min1<min2)
 {
     min2=60-min2;
     min1+=min2;
     h1--;
 }
 else{
 min1=min1-min2;
 }
 min1=min1+(h1>h2?h1-h2:0)*60;
 //min1=h1*60+min1-(h2*60+min2);
 scanf("%d",&dist);
 if(min1>=2*dist)
 printf("%.1lf %.1lf\n",(double)(min1+dist),(double)min1);
 else
 printf("%.1lf %.1lf\n",(double)(min1+dist),(double)((min1+(2.0*dist))/2.0));
}
return 0;
}
