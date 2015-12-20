#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>

using namespace std;

typedef vector<double> vi;
typedef vector< vi > vvi;

int t,n,k,i,j,len1,len2;
double w[30][30];
int con[30][30];
vi v;
char s[100],s1[100];
double res=0.0,temp,temp1;
/*
int dfs(int s,int d,double *temp,int *count)
{
    if(!v[s]){
        v[s]=1;
        for(i=0;i<26;i++)
        {
            if(w[s][i]!=0.0)
            {
              if(i==d){
                *temp+=w[s][i];
              (*count)++;
               return 1;
              }
              (*count)++;
              *temp+=w[s][i];
              if(dfs(i,d,temp,count))
                return 1;
            }
        }
    }
    return 0;
}

int dfsalgo(int s,int d,double *temp)
{
    v=vi(26,0);
    double temp1=0.0;
    int count=0;
    if(dfs(s,d,&temp1,&count)){
        if(count>k)
        return 0;
        else if(count<k)
        {
            if(w[d][d]==0.0)
                return 0;
        }
        *temp+=temp1;
        return 1;
    }
    else
        return 0;
}
*/

double rec(char s,char d,int k,double temp)
{
    if(k==0&&s==d){
        return 1;
    }
    else if(k==0&&s!=d)
        return 0;
    else
    {
        for(int i=0;i<26;i++){
                if(w[s-'a'][i]>0.000000001){

            if(rec(i+'a',d,k-1,temp)){
                    temp=temp*w[s-'a'][i];
                //printf("%lf\n",temp);
            return temp;
            }
                }
        }
        return 0.0;

    }

}
int main()
{
int count=0,k1;
scanf("%d",&t);
while(t--)
{
    scanf("%d%d\n",&n,&k);
    scanf("%s",s);
    k1=k;
    len1=strlen(s);
    for(i=0;i<26;i++)
    {
        for(j=0;j<26;j++)
        {
            scanf("%lf",&temp);
            //printf("temp %d ",temp);
            w[i][j]=temp;

        }
    }
    getchar();
    res=0.0;temp1=1.0;
    while(n--){
    scanf("%s",s1);
    len2=strlen(s1);
    if(len1==len2)
    {   i=0;
        temp1=1.0;
        while(s1[i]){
                k1=k;
                temp=1.0;
        temp1*=rec(s[i],s1[i],k1,temp);
        i++;
    }
 res+=temp1;
}
    }
    printf("%lf\n",res);
}

return 0;
}
