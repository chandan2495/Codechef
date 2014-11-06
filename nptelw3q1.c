#include<stdio.h>
#include<malloc.h>

int power(int x, int y);

int main()
{
/*write your code here*/

int n,*a,i,j,count=0;
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);

for(i=0;i<n;i++)
    scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(power(a[i],a[j])>power(a[j],a[i]))
  count++;
 }
}
printf("%d",count);
    return 0;
}

/* THE CODE BELOW WILL BE AUTOMATICALLY UNCOMMENTED DURING EXECUTION. PLEASE DO NOT MODIFY ANYTHING BELOW THIS LINE.*/

int power(int x, int y)
{
   int result = x,i;

   if(y == 0) return 1;
   if(x < 0 || y < 0) return 0;

   for(i = 1; i < y; ++i)
   result *= x;
   return result;
}
