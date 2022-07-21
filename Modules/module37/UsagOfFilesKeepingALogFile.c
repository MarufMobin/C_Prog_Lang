#include<stdio.h>

int main(){

    FILE *logFile = fopen("logfile.txt", "a");
    FILE *inputFile = fopen("input2.txt", "r");

    if( inputFile == NULL ){
        fprintf(logFile, "Input File are not avalabail in 12:38 AM \n");
    }

}
