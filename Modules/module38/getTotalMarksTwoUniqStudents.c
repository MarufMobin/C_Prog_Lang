#include<stdio.h>

struct Student{
    char name[100];
    int id;
    int marks;
};

struct Unique_student{
    char name[100];
    int id;
    int total;
};
int main(){
    int n;
    scanf("%d", &n);
    struct Student students[n];
    //Unique Student Value define here
    struct Unique_student maruf = {"Maruf", 17256, 0};
    struct Unique_student salman = {"Salman", 17284, 0};

    for( int i = 0; i < n; i++ ){
        scanf("%s %d %d", &students[i].name, &students[i].id, &students[i].marks );
        if( students[i].id == maruf.id ){
            maruf.total += students[i].marks;
        }else{
            salman.total += students[i].marks;
        }
    }
    printf("%s %d %d\n", maruf.name, maruf.id, maruf.total);
    printf("%s %d %d\n", salman.name, salman.id, salman.total);
    return 0;
}
