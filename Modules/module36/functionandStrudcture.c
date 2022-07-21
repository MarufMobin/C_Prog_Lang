//#include<stdio.h>
//struct Student{
//    char name[100];
//    int roll;
//    int mark;
//};
//
//void print_struct( struct Student input ){
//    printf("%s %d %d", input.name, input.roll, input.mark);
//}
//
//void fun( struct Student *st ){
////    (*st).mark = 100;
//    st->mark = 1000;
//}
//int main(){
//    struct Student input = {"Maruf" , 21, 81 };
//    fun(&input);
//    print_struct(input);
//    return 0;
//}

#include<stdio.h>
struct Student{
    char name[100];
    int roll;
    int mark;
};
void print_func( struct Student input ){
    printf("%s %d %d ", input.name, input.roll, input.mark );
}
void fun( struct Student *input ){
    //    input->mark = 100;
    (*input).mark = 70;
}
int main(){
    struct Student input = { "Maruf" , 22, 59 };
    fun(&input);
    print_func(input);
    return 0;
}





















