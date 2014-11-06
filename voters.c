#include<stdio.h>
int a[50001],b[50001],c[50001],d[50001];
int main()
{
int n1,n2,n3,i,j,k,max=0,l=0;

scanf("%d%d%d",&n1,&n2,&n3);
max=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);

for(i=0;i<n1;i++)
scanf("%d",&a[i]);
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
for(i=0;i<n3;i++)
scanf("%d",&c[i]);

for(i=0,j=0,k=0;i<n1||j<n2||k<n3;)
{

if(a[i]==b[j]&&b[j]==c[k])
 {
     d[l++]=a[i];
     i++,j++,k++;
 }
 else if(a[i]==b[j])
 {
 d[l++]=a[i];
 i++,j++;
 }
 else if(a[i]==c[k])
 {
 d[l++]=a[i];
 i++,k++;
 }
else if(c[k]==b[j])
 {
 d[l++]=b[j];
 k++,j++;
 }
 else{
  if(i<(n1-1)&&a[i]<b[j])
  i++;
  else if(j<(n2-1))
  j++;
  if(i<(n1-1)&&a[i]<c[k])
  i++;
  else if(k<(n3-1))
  k++;
  if(j<(n2-1)&&b[j]<c[k])
  j++;
  else if(k<(n3-1))
  k++;
 }
 if((i==n1&&j==n2)||(j==n2&&k==n3)||(i==n1&&k==n3))
 break;
 if(i==n1)
 i--;
 if(j==n2)
 j--;
 if(k==n3)
 k--;
}

printf("%d\n",l);
for(i=0;i<l;i++)
printf("%d\n",d[i]);
return 0;
}
