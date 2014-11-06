#include<stdio.h>

char s[1000010];
int main()
{
int i,a[256]={0},j=0;

while(j!=1220){
scanf("%[^\n]s",s);
i=0;
while(s[i])
{
 a[s[i]]++;
 //printf("%c",s[i]);
 i++;

}

j++;
}
for(i=1;i<255;i++)
printf("%c %d\n",i,a[i]);

scanf("%d",&i);
return 0;
}
