#include<stdio.h>
#include <string.h>

int main(){

    char name[100];
    gets(name);

    int length = (int)(sizeof(name)/sizeof(name[0]));
    char result[]={0};
    for(int i= 0; i <length ;i++){
        if( i == 0 ){
            printf("%d This is I value \n", name[i]);
            result[i] = toupper(name[i]);
        }else{
            result[i] = name[i];
        }
    }
    printf("%s",result);

    return 0;
}


