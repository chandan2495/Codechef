#include<stdio.h>
#include<string.h>

int a[41][30001],b[20001],k[41];
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
int n,m,c,i,j,l,max,count,pos;
struct temp t[40];
//n=getint();
//m=getint();
scanf("%d%d",&n,&m);
j=0;
for(i=0;i<m;i++)
{
 //   t[i].k=getint();
 scanf("%d",&t[i].k);
 t[i].pos=i;
 for(j=0;j<t[i].k;j++)
 {
  //   c=getint();
  scanf("%d",&c);
  a[i][j]=c;
 }
}

max=-1,count=0;

while(max!=0)
{
   max=-1;
   for(i=0;i<m;i++)
    {
    count=0;
    if(k[i]==0){
    memset(b,0,sizeof(b));
    for(l=0;l<t[i].k;l++)
    b[a[t[i].pos][l]]=1;
    for(j=0;j<m;j++)
    {

     if(k[j]==0&&t[i].pos!=t[j].pos){
        for(l=0;l<t[j].k;l++)
        {
                    //printf("%d %d\n",t[i].pos,a[t[i].pos][j]);
        if(b[a[t[j].pos][l]]==0)
        continue;
        else
        break;
        }
      if(l!=t[j].k){
      count++;
      //printf("offer %d\n",t[j].pos);
      }
    }
 }

}
if(max<count){
    max=count;
    pos=i;}
}
if(max==0)
break;
//printf("%d %d\n",max,pos);
k[pos]=1;
}
//memset(b,0,sizeof(b));

/*memset(b,0,sizeof(b));
    for(l=0;l<t[0].k;l++)
    b[a[t[0].pos][l]]=1;*/
count=0;
for(i=0;i<m;i++)
{
    if(k[i]==0)
        count++;
}
printf("%d\n",count);
 return 0;
}
