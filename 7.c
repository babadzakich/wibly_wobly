#include <stdio.h>

int main()
{
    int n,m,p,k,l,x,y;
    scanf("%d", &n);
    scanf("%d %d %d %d", &m, &p, &k, &l);
    x=l*(p-1)+k;
    y=((x-m%x)+m)/x;
    n=n/y;
    printf("%d %d",n/l+1,n%l);
    return 0;
}