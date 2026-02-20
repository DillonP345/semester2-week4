
/*
 * Factorial
 */

 #include <stdio.h>



 int main( void ) {
    int f[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
   
   for (int f = 0; f< 20; ++f){
      long factorial = 1;
      for (int i= 1; i<=f; ++i){
         factorial *= i;
      }
      printf("%d! = %ld\n",f ,factorial);
   }

   

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */

    return 0;
 }
