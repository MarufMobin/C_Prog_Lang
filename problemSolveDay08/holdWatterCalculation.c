//#include<stdio.h>
//
//int main(){
//    int A, B, C;
//    scanf("%d %d %d", &A, &B, &C);
//    int leftWater = A - B;
//
//    if( leftWater >= C ){
//        printf("0");
//    }else{
//        C -= leftWater;
//        printf("%d", C);
//    }
//
//}






#include<stdio.h>

int main(){

    // Find How Many Rest water in Bottle
    int A, B, C;
    scanf("%d %d %d", &A , &B , &C);
    int water_left = A - B;
    int water_poured = water_left < C ? water_left : C;
    C -= water_poured;
    printf("%d", C );
    return 0;
}

















