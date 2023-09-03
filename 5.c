
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d", &a, &b);
    c=a/b;
    d=a/b+1;
    e=a%b;
    printf("%d %d %d %d", c, d, c, e);
    return 0;
}