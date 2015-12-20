#include<stdio.h>
typedef long long ll;
int a[1000100];
ll b[1000100];

int compare(int *a,int *b)
{
    return *a-*b;
}

int bsearch(int s,int n)
{
    int l,mid,h;
    l=0,h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==s)
            return mid;
        else if(a[mid]>s)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

int bsearch1(int s,int n)
{
    int l,mid,h;
    l=0,h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==s||(a[mid]<s&&a[mid+1]>s))
            return mid;
        else if(a[mid]>s)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}


int bsearch2(int s,int n)
{
    int l,mid,h;
    l=0,h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==s||(a[mid-1]<s&&a[mid]>s))
            return mid;
        else if(a[mid]>s)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}


int main()
{
int n,m,i,j,d,pos;
char c1,c2,res[1000100],s[1000100];
ll temp;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);
temp=1;
b[0]=1;
for(i=1;i<n;i++)
{
    b[i]=temp+1;
    b[i]=b[i]+b[i-1];
    temp++;
}
/*
for(i=1;i<=n;i++)
    printf("%d ",b[i]);
printf("\n");*/
getchar();
for(i=0;i<m;i++)
{
    gets(s);

    j=1;
    c1=s[0];
    d=0;
    while(1){
        while(s[j]&&s[j]==' '||s[j]=='\t')
            j++;
        while(s[j]&&s[j]!=' '&&s[j]!='\t'){
            d=d*10+(s[j]-'0');j++;}
        while(s[j]&&s[j]==' '||s[j]=='\t')
            j++;
        break;
    }
    c2=s[j];
    //printf("%c %d %c\n",c1,d,c2);
    if((d>=a[n-1]&&c1=='>')||(d<=a[0]&&c1=='<'))
        res[i]=(c2=='D')?'C':'D';
    else if(c1=='>') //case1
    {
        //pos=bsearch1(d,n);
        for(j=0;j<n;j++){
            if(a[j]>d)
                break;
        }
        //printf("%d\n",pos);
        pos=j;
        temp=b[n-1]-(pos>0?b[pos-1]:0);
        if(temp%2!=0)
            res[i]=c2;
        else
            res[i]=(c2=='D')?'C':'D';
    }
    else if(c1=='<') //case1
    {
        //pos=bsearch2(d,n);
        for(j=0;j<n;j++){
            if(a[j]>=d)
                break;
        }
        //printf("%d\n",pos);
        pos=j;
        temp=b[pos-1];
        if(temp%2!=0)
            res[i]=c2;
        else
            res[i]=(c2=='D')?'C':'D';
    }
    else if(c1=='=') //case1
    {
        //pos=bsearch(d,n);
        for(j=0;j<n;j++){
            if(a[j]==d)
                break;
        }
        //printf("%d\n",pos);
        pos=j;
        if(pos!=n){
        temp=b[pos]-b[pos-1];
        if(temp%2!=0)
            res[i]=c2;
        else
            res[i]=(c2=='D')?'C':'D';
        }
        else{
            res[i]=c2;
        }
    }
}

printf("%s\n",res);

return 0;
}
