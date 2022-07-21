#include<stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s",&str);

    int count=1;
    for(int i = 0; i <= strlen(str); i++){
        if(str[i]==str[i-1]){
            count++;
        }
        else if(count>=7 && str[i]!=str[i-1] ){
            break;
        }
        else{
            count=1;
        }
    }
    if(count<7){
        printf("NO");
    }
    else{
        printf("YES");
    }
}
