#include<stdio.h>

int myAtoi(char* str) {
    int i=0;
    long long n=0;
    char firstChar;
    while(*str==' '||*str=='\t'||*str=='\n')
        str++;
    firstChar=*str;
    if(firstChar=='-'||firstChar=='+'){
        str++;
    }
    while(*str){
        if((*str<='9')&& (*str>='0')){
            n=n*10+(*str - '0');
            printf("%lld\n",n);
            if(firstChar!='-'&&(n>2147483647)){
                n=2147483647;
                break;
            }
            else if(firstChar!='+'&&n>2147483648){
                n=2147483648;
                break;
            }
        }
        else
            break;
        str++;
    }
    n=n*((firstChar=='-')?-1:1);
    printf("%lld\n",n);
    return n;
}

int main(){
    char s[1000];
    while(1){
        scanf("%s",s);
        printf("%d %d\n",myAtoi(s),atoi(s));
    }
}
