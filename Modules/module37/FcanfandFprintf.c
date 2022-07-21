#include<stdio.h>

int main(){
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt","r");
    outputFile = fopen("output.txt", "w");
    if( inputFile == NULL ){
        printf(outputFile,"No Input Founded");
    }

    int n;
    fscanf(inputFile,"%d", &n);
    int sum = 0;
    for( int i = 0; i < n; i++ ){
        int a;
        fscanf(inputFile,"%d",&a);
        sum += a;
    }
    fprintf(outputFile,"Total Sum = %d", sum);
    return 0;
}
