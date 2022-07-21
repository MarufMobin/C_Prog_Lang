// Write a function to find the area of a rectangle given its length and width.
#include<stdio.h>
#include<math.h>

float tringleAreaFind( float w , float h ){
    return 1*5 * w * h;
}
int main(){

    float width, height;
    scanf("%f %f", &width,&height);
    printf("%f", tringleAreaFind( width,height));

}

