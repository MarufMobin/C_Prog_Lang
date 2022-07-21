#include<stdio.h>
#include<string.h>
struct Date{
    int day;
    int month;
    int year;
};
struct Student{
    char* name[100];
    int class;
    int roll;
    struct Date dob;
};
void printDate( struct Date date ){
    printf("%d-%d-%d\n", date.day,date.month,date.year );
}
void printStudent( struct Student st){
   printf("Name: %s\n", st.name);
    printf("Class: %d\n", st.class);
    printf("Roll: %d\n", st.roll);
    printf("DOB: ");
    printDate(st.dob);
}
int main(){
    struct Student st1 = {
        .class=9,
        .roll=10,
        .dob = { 1 , 1, 2000 },
    };

    char name[]= "Maruf Mobin";
    strcpy( st1.name, name );
    printStudent(st1);

}
