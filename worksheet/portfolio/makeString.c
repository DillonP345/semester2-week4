
/*
Name: Dillon Phillips
Student ID: 201984193
This code takes up to 10 commmand line arguments,
with each argument between 1 and 4 characters long,
and out puts them with a dash inbetween them
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    int count = argc - 1; //counts number of arguments passed
    char buffer[100];

    // process the command-line data using appropriate string functions
    if (count < 1 || count > 10){
        printf("provide arguments between 1-10\n");
        return 1;
    }
    
    for(int i = 1; i < count + 1; i++){
        int len = strlen(argv[i]);
        if(len < 1 || len > 4){
            printf("argument not in char range 1-4\n");
            return 1;
        }
        strcat(buffer,argv[i]);
        if(i < count){
            strcat(buffer,"-");
        }
    }

   

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}