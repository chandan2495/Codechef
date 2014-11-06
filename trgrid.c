#include<stdio.h>

int main()
{
int t,a,b;
scanf("%d",&t);

while(t--)
{
 scanf("%d%d",&a,&b);

 if(a<=b){
  if(a%2==0)
  printf("L\n");
  else
  printf("R\n");
 }
 else
 {
  if(b%2==0)
  printf("U\n");
  else
  printf("D\n");
 }
}

return 0;

}
