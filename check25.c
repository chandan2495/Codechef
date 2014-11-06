void foo(char c)
{
   printf("From foo: char");
}
void foo(int i)
{
   printf("From foo: int");
}

int main()
{
   foo('V');
   return 0;
}
