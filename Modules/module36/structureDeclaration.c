#include<stdio.h>

struct Student{
    char name[100];
    int roll;
    int marks;
    int arr[100];
};

int main(){
    struct Student value={ "Maruf", 22, 80 };
    for( int i = 0; i < 5; i++ ){
        scanf("%d",&value.arr[i]);
    }
    printf("Name -> %s Roll -> %d Marks => %d ", value.name, value.roll, value.marks );
    for( int i = 0; i < 5; i++ ){
        printf("%d ",value.arr[i]);
    }
    return 0;
}
