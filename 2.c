#include <stdio.h>

int main()
{
   int x,y,z,s;
   scanf("%d %d %d", &x, &y, &z);
   if (x>0 && y>0 && z>0){
       s=x*y*2+x*z*2+y*z*2;
       printf("%d",s);
   }
   if(x<=0){
       printf("1\n");
   }
   if(y<=0){
       printf("2\n");
   }
   if(z<=0){
       printf("3\n");
   }
   return 0;
}