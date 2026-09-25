#include <stdio.h>

void exchange(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=2;
    int b=3;
    printf("%d ,%d\n",a,b);
    exchange(&a,&b);
    printf("%d ,%d",a,b);
    return 0;
}