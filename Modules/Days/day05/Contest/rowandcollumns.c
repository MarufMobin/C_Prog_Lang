#include<stdio.h>

int main(){
    int H,W,h,w,result;
    //This is White Columns and Rows Count
    scanf("%d %d", &H, &W);
    //Black Columns and Rows
    scanf("%d %d", &h, &w);
    result = (H-h) * (W-w);
    printf("%d", result);
    return 0;
}
