#include<stdio.h>

int main(){
    int numberOfSubject;
    scanf("%d", &numberOfSubject);
    int total_marks = 0;
    for( int i = 1; i <= numberOfSubject; i++ ){
        int num;
        printf("Give me your %d Subject Number", i);
        scanf("%d", &num);
        total_marks += num;
    }
    // english, bangla, math;
    //scanf("%d %d %d", &english, &bangla,&math);

   // int marks = (english + bangla + math) / 3;
    int marks = total_marks / numberOfSubject;
    if( marks >= 80 ){
        printf("Grade = A+ \n");
    } else if( marks >= 70 ){
        printf("Grade = A \n");
    } else if( marks >= 60 ){
        printf("Grade = B \n");
    } else if( marks >= 50 ){
        printf("Grade = C \n");
    } else if( marks >= 40 ){
        printf("Grade = D \n");
    }else{
        printf("Grade = F");
    }
}

