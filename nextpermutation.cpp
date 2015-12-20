#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<string.h>

using namespace std;

#define all(v) (v).begin(),(v).end()
int t,n,temp;
string b[305];

int compare(const void *a,const void *b)
{
const char *ia=(const char *)a;
const char *ib=(const char *)b;
return strcmp(ia,ib);
}

int main()
{
vector<int> v;
string a[305],p="";
char help[305];
int i,n=4,j;

scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
v=vector<int> (n,0);
for(i=1;i<=n;i++){
    b[i]="";
    for(j=0;j<n-1;j++){
    scanf("%d",&temp);
    sprintf(help,"%d",temp);
    b[i]+=help;
    }
}
//printf("%s",b[1]);


sort(b,b+n+1);

/*for(i=1;i<=n;i++)
    cout<<b[i]<<endl;*/
    //printf("%s\n",b[i]);

for(i=0;i<n;i++)
{
 v[i]=i+1;
}

do
{
printf("\npermutaion : ");
for(i=0;i<n;i++)
    printf("%d ",v[i]);

    for(i=1;i<=n;i++)
    {
        printf("\nq[%d] : ",i);
       a[i]="";
        for(j=0;j<n;j++)
        if(v[j]!=i){
        printf("%d ",v[j]>i?v[j]-1:v[j]);
        temp=v[j]>i?v[j]-1:v[j];
        sprintf(help,"%d",temp);
        a[i]+=help;
        }
    }

    sort(a,a+n+1);

    //for(i=1;i<=n;i++)
    //cout<<a[i]<<endl;

    for(i=1;i<=n;i++)
    {
        if(a[i].compare(b[i])){
            //cout<<a[i]<<" "<<b[i]<<endl;
            break;
        }
    }

    if(i==n+1)
    {
        for(i=0;i<n;i++)
            printf("%d ",v[i]);
        printf("\n");
        break;
    }
    //printf("\n");
}while(next_permutation(all(v)));
}
return 0;
}
