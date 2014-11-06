int fun(int *x, int *y, int *z)
{
    *y=*y+4;
    *z=*x+*y+*z;
}
int main()
{
    int x=10;
    int y=3;
    fun(&y,&x,&x);
    y=x+2;
    fun(&x,&y,&y);
    x=y+2;
    printf("%d,%d",x,y);
    return 0;
}
