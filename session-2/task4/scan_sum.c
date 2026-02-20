
#include <stdio.h>

int main( void ) {

    // define suitable data
    int var1;
    int var2;
    // use scanf to read from the terminal
    scanf("%d %d",&var1,&var2);
    // print the output from scanf and the data values 
    int var3 = var1 + var2;
    printf("%d + %d = %d\n",var1,var2,var3);
    return 0;
}