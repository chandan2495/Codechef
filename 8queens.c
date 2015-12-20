#include<stdio.h>
char c[8][8];

int valid(int i,int j)
{
   int k,l;
   for(k=i-1,l=j-1;k>=0&&l>=0;k--,l--){ //left upper diagonal
    if(c[k][l]=='*')
        return 0;
   }
   for(k=i+1,l=j-1;k<8&&l>=0;k++,l--){  //left lower diagonal
    if(c[k][l]=='*')
        return 0;
   }
   for(k=0;k<j;k++){    //left side
    if(c[i][k]=='*')
        return 0;
   }
   for(k=0;k<i;k++){    //upper
    if(c[k][j]=='*')
        return 0;
   }
   for(k=i+1;k<8;k++){    // lower
    if(c[k][j]=='*')
        return 0;
   }
   for(k=0;k<j;k++){    //right side
    if(c[i][k]=='*')
        return 0;
   }
   for(k=i-1,l=j+1;k>=0&&l<8;k--,l++){ //right upper diagonal
    if(c[k][l]=='*')
        return 0;
   }
   for(k=i+1,l=j+1;k<8&&l<8;k++,l++){  //right lower diagonal
    if(c[k][l]=='*')
        return 0;
   }

   return 1;
}

int main()
{
int i,j,flag=0,xy[3]={-1,0,1},k,l,count=0;

for(i=0;i<8;i++){
    for(j=0;j<8;j++)
    {
        scanf("%c",&c[i][j]);
        if(c[i][j]=='*')
            count++;
    }
    if(i!=7)
    getchar();
}

flag=0;
if(count==8){
for(i=0;i<8;i++){
    for(j=0;j<8;j++)
    {
    if(c[i][j]=='*'){
     if(!valid(i,j)){
        flag=1;
        break;
     }
    }
    }
    if(flag==1)
    break;
}
}
else
flag=1;
if(flag==1)
printf("invalid");
else
printf("valid");
return 0;
}
