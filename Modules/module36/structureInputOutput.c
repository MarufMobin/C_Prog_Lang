#include<stdio.h>
struct Student{
    char name[100];
    int roll;
    int marks;
};
int main(){

    int n;
    scanf("%d", &n);
    struct Student hight = { .marks = 0};
    for( int i = 0; i < n; i++ ){
        struct Student input;
        scanf("%s %d %d", &input.name, &input.roll, &input.marks);
        if( input.marks > hight.marks ){
            hight = input;
        }
    }
    printf("Topper : Name -> %s Roll -> %d Hight Marks -> %d \n ", hight.name, hight.roll, hight.marks);

}
