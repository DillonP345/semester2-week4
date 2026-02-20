
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests
    printf("%s\n", str1);
    // use 'strcmp' to compare 2 strings - print the return value
    int temp1 = strcmp(str1,str2);
    printf("comparing %s with %s:\n", str1, str2);
    printf("strcmp returns %d\n\n", temp1);
    // use 'strcat' to concatenate 2 strings - print the resulting string
    char temp2 = strcat(str1,str2);
    printf("%d\n",temp2);
    // use 'strcpy' to copy a string into str3 - print string 3
    //char temp3[] = strcpy(str1,str3);
    //printf("%s\n", temp3);


    return 0;
}
