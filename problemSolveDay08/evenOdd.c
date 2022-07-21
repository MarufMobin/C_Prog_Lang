//একটি প্রোগ্রাম লিখ যেটি কোন সংখ্যা জোড় না বিজোড় বলতে পারে।

#include<stdio.h>

int main(){
    int num;
    printf("Please Give me a Number : ");
    scanf("%d", &num);
    system("@cls||clear");
    if( num % 2 == 0){
        printf("%d is The Even Number", num);
    }else{
        printf("%d is The Odd Number", num);
    }
    getch();
    return 0;
}
