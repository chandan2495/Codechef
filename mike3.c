#include<stdio.h>
#include<string.h>

int a[41][30001],b[20001];
struct temp{
int k;
int pos;
};
int compare(struct temp *t1,struct temp *t2)
{
    return (*t1).k-(*t2).k;
}
int main()
{
int n,m,k[41],c,i,j,l,max,count;
struct temp t[40];
scanf("%d%d",&n,&m);
j=0;
for(i=0;i<m;i++)
{
 scanf("%d",&t[i].k);
 t[i].pos=i;
 for(j=0;j<t[i].k;j++)
 {
  scanf("%d",&c);
  a[i][j]=c;
 }
}
qsort(t,m,sizeof(struct temp),compare);
max=0,count=0;
for(i=0;i<m;i++)
{
    count=0;
    memset(b,0,sizeof(b));
    for(l=0;l<t[i].k;l++)
    b[a[t[i].pos][l]]=1;
 for(j=0;j<m;j++)
 {
     if(t[i].pos!=t[j].pos){
        for(l=0;l<t[j].k;l++)
        {
                    //printf("%d %d\n",t[i].pos,a[t[i].pos][j]);
        if(b[a[t[j].pos][l]]==0)
            continue;
        //b[a[t[j].pos][l]]=1;
        else
        break;
        }
      if(l==t[j].k){
      count++;
      for(l=0;l<t[j].k;l++)
        b[a[t[j].pos][l]]=1;
      //printf("offer %d\n",t[j].pos);
      }
    }
 }
if(max<(count+1))
max=count+1;
}
printf("%d\n",max);
 return 0;
}
