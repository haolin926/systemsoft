#include <stdio.h>

long factorial(int);

int main()
{
   long f1;
   int f_num = 5;
   
   f1 = factorial(f_num);
   printf("the reuslt is %ld", f1);
}

long factorial(int f) {
   if(f == 0) {
      return 1;
   } else {
      return f*factorial(f-1);
   }
}
