#include<stdio.h>

int main(){
    int i,n;
    scanf("%d\n", &n);
    int Bjorn =0;
    int King =0;
    char input;
    for(i=1; i<=n; i++){
            scanf("%c", &input);
        if(input=='A'){
            Bjorn++;
        } else if(input=='D'){
            King++;
        }

    }
        if(Bjorn>King){
            printf("Anton");
        }else if(Bjorn==King){
            printf("Friendship");
        }else{
            printf("Danik");
        }

return 0;
}
