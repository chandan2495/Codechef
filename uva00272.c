#include<stdio.h>

int main()
{
int i,flag=0,j=0,c;
char s1[100010];
while((c=getchar())!=EOF)
{
 if(c==34&&flag==0){
 s1[j++]=96;s1[j++]=96;
 flag=1;
 }
 else if(c==34&&flag==1)
 {
 s1[j++]=39;s1[j++]=39;
 flag=0;
 }
 else{
 s1[j++]=c;
 }

 i++;

}
printf("%s",s1);

return 0;
}
