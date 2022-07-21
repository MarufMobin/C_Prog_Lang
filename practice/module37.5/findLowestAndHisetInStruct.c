//Make an array of struct Student given below and tell which student got the highest marks and which student got the lowest marks?
#include<stdio.h>
struct Student {
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};
int main(){
    int n;
    scanf("%d", &n);
    struct Student arr[n];

    for( int i = 0; i < n; i++ ){
        scanf("%s %d %d %c %d", &arr[i].name, &arr[i].marks, &arr[i].roll, &arr[i].section, &arr[i].whichClass );
    }
    struct Student hight = { arr->marks=0};
    struct Student lowest = { arr[0].marks};
    for( int i = 0; i < n; i++ ){
        if( hight.marks < arr[i].marks ){
            hight = arr[i];
        }
        if( lowest.marks > arr[i].marks ){
            lowest = arr[i];
        }
    }
    printf("%s %d %d %c %d \n", hight.name, hight.marks, hight.roll, hight.section, hight.whichClass );
    printf("%s %d %d %c %d \n", lowest.name, lowest.marks, lowest.roll, lowest.section, lowest.whichClass );
}
