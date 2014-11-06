#include <stdio.h>
int main(void)
{
    int i = 10;   /* i is stored in read-write area */
    int j = 20;
    const int *ptr = &i;    /* ptr is pointer to constant */

    printf("ptr: %d\n", *ptr);
    *ptr = 100;        /* error: object pointed cannot be modified
                     using the pointer ptr */

    ptr = &j;          /* valid */
    printf("ptr: %d\n", *ptr);

    return 0;
}
