#include<stdio.h>

int a[2000010],b[1000010];

int main()
{
int n,i,j=0,k=0,temp,l=0,count=0,nof;

for(i=2;i<=sqrt(2000000);i++)
{
 if(a[i]==0)
 {

  for(j=i*i;j<=2000000;j+=i)
  a[j]=1;
 }
}

for(i=2;i<=2000000;i++)
{
  if(a[i]==0){
  b[k++]=i;
  }
}
j=2;
for(i=1;;i+=j,j++)
{
    nof=1;
    for(l=0;b[l]<=i;l++)
    {
        count=0;
        temp=i;
        while(temp>0&&temp%b[l]==0)
        {
            count++;
            temp=temp/b[l];
            //printf("%d\n",temp);
        }
        nof=nof*(count+1);
    }
    printf("%d nof %d\n",i,nof);
    if(nof>500)
        break;
}

printf("%d\n",i);

return 0;
}
