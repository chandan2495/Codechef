#include<stdio.h>
#include<string.h>

int compare(char *a,char *b)
{
    return *a-*b;
}

int comparestring(const void *a,const void *b)
{
 const char *a1=*(const char**)a;
 const char *b1=*(const char**)b;
 return strcmp(a1,b1);
}

typedef long long ll;

int main()
{
int t,i,j,k;
char s[6000][200],s1[200],temp[200];
ll count,res;
scanf("%d",&t);

while(t--)
{
memset(s,'\0',sizeof(s));
 scanf("%s",s1);
 i=0;k=0;
 for(i=0;s1[i];i++)
 {
    strncpy(s[k],&s1[i],1);
    strcat(s[k],"\0");
    k++;
    for(j=i+1;s1[j];j++)
    {
     strcpy(s[k],s[k-1]);
     strncat(s[k],&s1[j],1);
     strcat(s[k],"\0");
     qsort(s[k],strlen(s[k]),sizeof(char),compare);
     k++;
    }
 }


qsort(s,k,sizeof(char*),comparestring);

for(i=0;i<k;i++)
    printf("%s\n",s[i]);

 /*for(i=0;i<k;i++)
 {
     for(j=0;j<k-1;j++)
     {
         if(strcmp(s[j],s[j+1])>0)
         {
             strcpy(temp,s[j]);
             strcpy(s[j],s[j+1]);
             strcpy(s[j+1],temp);
         }
     }
 }*/
    res=0;
  for(i=0;i<k;)
  {   count=1;
      while(!strcmp(s[i],s[i+1]))
        i++,count++;
      res+=((count*(count-1))/2);
      i++;
  }
 printf("%lld\n",res);
}
return 0;
}
