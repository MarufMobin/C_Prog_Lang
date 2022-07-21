#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    float multipleNumbers = 0;
    for(int i = 1; i<=N; i++){
        float A,B;
        scanf("%f %f",&A,&B);
        multipleNumbers+= A*B;
    }
    printf("%.3f",multipleNumbers);
    return 0;
}
