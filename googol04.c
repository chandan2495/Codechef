#include<stdio.h>

int b[1000010];
int longest( int arr[], int n )
{
   int i, j, max = 0;

   for ( i = 0; i < n; i++ )
      b[i] = 1;

   for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i] > arr[j] && b[i] < b[j] + 1)
            b[i] = b[j] + 1;

   for ( i = 0; i < n; i++ )
      if ( max < b[i] )
         max = b[i];
   return max;
}

int a[1000010];
int main()
{
int n,i;

scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("%d\n",n-longest(a,n));

return 0;
}
