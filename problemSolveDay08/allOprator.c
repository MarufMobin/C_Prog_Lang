//আমরা একটা প্রোগ্রাম লিখেছিলাম যেটা a op b আকারের মান বের করতে পারে। ওটাকে এমনভাবে আপডেট কর যেন ওটা %
// অপারেটর এর জন্যও কাজ করে আর 0 দিয়ে ভাগ বা % করতে গেলে “Cannot divide by 0” print দেয়।
#include<stdio.h>
int main(){
    int num1 , num2;
    char opt;
    scanf("%d %c %d", &num1, &opt ,&num2);
    system("@cls||clear");
    if( opt == '+' ){
        printf("%d" , num1 + num2);
    }else if( opt == '-'){
        printf("%d", num1 - num2 );
    }else if( opt == '*' ){
        printf("%d", num1 * num2);
    }else{
        if( num1 == 0 || num2 == 0 ){
            printf("Cannot divide by 0");
        } else{
            printf("%d", num1 / num2 );
        }
    }

}
