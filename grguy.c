#include<stdio.h>
#include<string.h>

int main()
{
int t,i,j,n,min=0,track1,track2;
char l1[200100],l2[200100];
int nh1[200100],nh2[200100];
scanf("%d\n",&t);
while(t--)
{
    min=0; track1=track2=0;
    scanf("%s%s",&l1,&l2);
    n=strlen(l1);
    for(i=0;i<n;i++)
    {
        if(l1[i]=='#'&&l2[i]=='#')
        break;
        if(l1[i]=='.'&&l2[i]=='.'&&track1==0&&track2==0) //case 1 begining
            track1=track2=1;
        if(l1[i]=='.'&&l2[i]=='#')      //case 2
        {
            if(track1&&track2)
                track2=0;
            else if(!track1&&!track2)
                track1=1;
            else if(track2)
                track2=0,track1=1,min++;
        }
        if(l1[i]=='#'&&l2[i]=='.')      //case 2
        {
            if(track1&&track2)
                track1=0;
            else if(!track1&&!track2)
                track2=1;
            else if(track1)
                track1=0,track2=1,min++;
        }


    }
    if(i==n)
        printf("Yes\n%d\n",min);
    else
        printf("No\n");

}
return 0;
}
