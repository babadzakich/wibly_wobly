#include <stdio.h>

int main()
{
    int n,i=2,ost,del=0;
    scanf("%d", &n);
    ost=n/2;
    while(i<=ost && del==0){
        if(n%i==0){
            del+=1;
        }
        i++;
    }
    if(del>0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}