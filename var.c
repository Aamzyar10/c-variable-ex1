#include <stdio.h>


int main(){

   int num1 , num2 , num3 ;

   scanf("%d %d %d",&num1,&num2,&num3);

   if(num3 % num2 == 0 && num2 % num1 == 0)
   {
        printf("dividable\n");
   }
   else
   {
        printf("non dividable\n");
   }

    return 0;

}