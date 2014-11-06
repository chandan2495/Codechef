#include<stdio.h>

int main()
{
int t,count,flag=0,max,i,c,flag1=0,word_cnt=0,prev_cnt=0,space=0;
char s[2000];
scanf("%d",&t);

while(t--)
{
count=0;
max=-1;
flag=0;
c=10;
prev_cnt=word_cnt=0;
while(c==10)
    c=getchar();
while(1)
{
  if(c=='\n')
  {
     if(flag==1){
  if(prev_cnt==count){
   word_cnt++;
  if(word_cnt>max)
  max=word_cnt;}
  else
  {
      prev_cnt=count;
      word_cnt=1;
  }
  }
  break;
  }
 if(c<33){
        while((c=getchar())==32){space=1;}
 if(flag==1){
  if(prev_cnt==count){
   word_cnt++;
  if(word_cnt>max)
  max=word_cnt;}
  else
  {
      prev_cnt=count;
      word_cnt=1;
  }
  }
 flag=0;
 count=0;
 continue;}
 else{
        c=getchar();
 count++;flag=1;}


}
if(max<word_cnt)
    max=word_cnt;
if(max!=-1)
printf("%d\n",max);
else{
    printf("0\n");
    t++;
}
if(max==0)
    t++;
}
return 0;
}
