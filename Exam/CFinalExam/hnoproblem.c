#include<stdio.h>
#include<string.h>

int main(){

    char line [105];
    scanf("%s", line);
    for(int i=0; i<strlen(line)-1; i+=2){
       for(int j=i+2; j< strlen(line); j+=2){
            char temp ;

            if(line[i] > line[j]){
                temp=line[i];
                line[i]=line[j];
                line[j]=temp ;
            }
       }


    }

    for(int i=0; i<strlen(line); i++){
        printf("%c", line[i]);
    }
}
