#include<stdio.h>
#include<string.h>

int a[41][30001],b[20001];
struct temp{
int k;
int pos;
int rem;
int acc;
};

int getint()
{
    int n=0,c=0;
    while((c=getchar())<33);
    while(c>='0'&&c<='9')
    {
        n=(n<<3)+(n<<1)+c-'0';
        c=getchar();
    }
    return n;
}

int compare(struct temp *t1,struct temp *t2)
{   if((*t1).acc==(*t2).acc)
    return (*t1).rem-(*t2).rem;
    else
    return (*t2).acc-(*t1).acc;
}
int main()
{
int n,m,k[41],c,i,j,l,max,count;
struct temp t[40];
n=getint();
m=getint();
//scanf("%d%d",&n,&m);
j=0;
for(i=0;i<m;i++)
{
    t[i].k=getint();
 //scanf("%d",&t[i].k);
 t[i].pos=i;
 for(j=0;j<t[i].k;j++)
 {
     c=getint();
  //scanf("%d",&c);
  a[i][j]=c;
 }
}

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
        else
        break;
        }
      if(l==t[j].k){
      count++;
      //printf("offer %d\n",t[j].pos);
      }
    }
 }
 t[i].acc=count;
 t[i].rem=m-count;
}
//memset(b,0,sizeof(b));
qsort(t,m,sizeof(struct temp),compare);
count=1;
max=0;
/*memset(b,0,sizeof(b));
    for(l=0;l<t[0].k;l++)
    b[a[t[0].pos][l]]=1;*/
for(i=0;i<m;i++)
{
    count=1;
    memset(b,0,sizeof(b));
    for(l=0;l<t[i].k;l++)
    b[a[t[i].pos][l]]=1;
    for(l=0;l<m;l++)
    {
        if(t[i].pos!=t[l].pos){
    for(j=0;j<t[l].k;j++)
    {
       if(b[a[t[l].pos][j]]==0)
       continue;
       else
            break;
   }
   if(j==t[l].k)
   {
       for(j=0;j<t[l].k;j++)
        b[a[t[l].pos][j]]=1;
       count++;
   }
   }
 }
 if(max<count)
    max=count;
}

printf("%d\n",max);
 return 0;
}
