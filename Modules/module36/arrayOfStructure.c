#include<stdio.h>
struct Student{
    char name[100];
    int roll;
    int mark;
};
void print_struct( struct Student a ){
    printf("%s %d %d \n", a.name, a.roll, a.mark );
}
void fun( struct Student *a ){
    a[0].mark = 100;
}
int main(){
    struct Student a[3];
    for( int i = 0; i < 3; i++ )
    {
        scanf("%s %d %d", &a[i].name, &a[i].roll, &a[i].mark );
    }
    fun(a);
//    printf("\n");
//    for( int i = 0; i < 3; i++ ){
//        print_struct(a[i]);
//    }
    printf("\n");
    for( int i = 2; i >= 0; i--){
        print_struct(a[i]);
    }
}
