#include<stdio.h>
#include<string.h>

struct a1{
    char s[150];
    int count;
};

struct a1 a[1000];

int compare(struct a1 *a,struct a1 *b)
{
    return strcmp((*a).s,(*b).s);
}

int main()
{
int n,i,j,k=0;
char s[150];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",&s);
if(i>0)
{
 for(j=0;j<k;j++)
 {
  if(!strcmp(a[j].s,s))
  {
   a[j].count++;
   break;
  }
 }
 if(j==k)
 {
 strcpy(a[k].s,s);
 a[k].count=1;
 k++;
 }
}
else{
strcpy(a[k].s,s);
a[k].count=1;
k++;
}
}

qsort(a,k,sizeof(struct a1),compare);

for(i=0;i<k;i++)
printf("%s %d\n",a[i].s,a[i].count);


return 0;
}
