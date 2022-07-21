////একটি প্রোগ্রাম লিখ যা ১oo তে মার্ক ইনপুট নিয়ে গ্রেড আউটপুট দিতে পারে।  এখানে গ্রেড এর টেবিল দেওয়া হল।
//
//#include<stdio.h>
//
//int main(){
//    int mark;
//    scanf("%d", &mark);
//    if( mark <= 40){
//        printf("You have F Grade Achive");
//    }else if( mark <= 49 ){
//        printf("You have D Grade Achive");
//    }else if( mark <= 59 ){
//        printf("You have C  Grade Achive");
//    }else if( mark <= 69){
//         printf("You have B  Grade Achive");
//    }else if( mark <= 79){
//         printf("You have A  Grade Achive");
//    }else{
//         printf("You Got A+");
//    }
//    getch();
//    return 0;
//}





#include<stdio.h>

int main(){
    int mark;
    scanf("%d", &mark);
    system(@cls||clear);
    if( mark >= 80 ){
        printf("you Got A+ ");
    }else if( mark >= 70 ){
        printf("you Got A ");
    }else if( mark >= 60 ){
        printf("you Got B ");
    }else if( mark >= 50 ){
        printf("you Got C ");
    }else if( mark >= 40 ){
        printf("you Got D ");
    }else {
        printf("You Got F");
    }
    getch();
    return 0;
}
