#include<stdio.h>

int main(){
    //Get the Input Value
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    if( inputFile == NULL ){
        printf("NO Input Founded\n");
    }
    // print the output Value
    FILE *outputFile;
    outputFile = fopen("output.txt", "w");

    while( 1 ){
        char ch = fgetc(inputFile);
        if( ch == EOF ){
            break;
        }
        fputc(ch, outputFile);
    }
    return 0;
}
