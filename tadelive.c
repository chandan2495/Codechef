#include<stdio.h>
#include<math.h>

typedef long long ll;

typedef struct tip{
 int a;
 int b;
 int d;
}t1;
t1 t[100010];

int compare(void *a,void *b)
{
 t1 *a1=(t1 *)a;
 t1 *b1=(t1 *)b;

 return (*b1).d-(*a1).d;
}

int main()
{
int n,ac=0,bc=0,i;
ll tprofit=0;

scanf("%d%d%d",&n,&ac,&bc);
for(i=0;i<n;i++)
scanf("%d",&t[i].a);

for(i=0;i<n;i++){
scanf("%d",&t[i].b);
t[i].d=abs(t[i].a-t[i].b);
}

qsort(t,n,sizeof(t1),compare);


for(i=0;i<n;i++)
{
 if(t[i].a==t[i].b)
 {
     if(ac>bc)
        tprofit+=t[i].a,ac--;
     else
        tprofit+=t[i].b,bc--;
 }
 else if(((t[i].a>t[i].b)||bc==0)&&ac>0)
 tprofit+=t[i].a,ac--;
 else if(bc>0)
 tprofit+=t[i].b,bc--;
}

printf("%lld\n",tprofit);

return 0;
}
