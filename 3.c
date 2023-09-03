#include <stdio.h>

int main()
{
   int N,n,sm=0,ost;
   scanf("%d", &N);
   for(int i=0;i<N;i++){
       scanf("%d",&n);
       ost=n-(n/2)*2;
       if(ost=0){
           sm+=n;
       }
   }
   printf("%d",sm);
   return 0;