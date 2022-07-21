#include <stdio.h>
#include <math.h>

int main  () {
    int getNum;
    scanf("%d",&getNum);
    if(getNum<=pow(2.0,31) &&getNum>=pow(-2.0,31)-1 )   printf("YES");
    else {
        printf("NO");
    }

}
