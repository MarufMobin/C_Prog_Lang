#include<stdio.h>

int main(){

    int num1, num2;
    char op;
    scanf("%d %c %d", &num1, &op ,&num2);
    int result;

    // Using Switch Case and Give me Calculated Value

    switch(op){
        case '+' :
            printf("%d", num1 + num2);
            break;
        case '-' :
            printf("%d", num1 - num2);
            break;
        case '*' :
            printf("%d", num1 * num2);
            break;
        case '/' :
            printf("%d", num1 / num2);
            break;
        default :
            printf("Unknown Oparator");
            break;
    }


    //if Else Statement using to calculate any number and using different type of oparators
//    if( op == '+' ){
//        result = num1 + num2;
//    }else if( op == '-' ){
//        result = num1 - num2;
//    }else if( op == '*' ){
//        result = num1 * num2;
//    }else if( op == '/' ){
//        result = num1/num2;
//    }
//    printf("%d", result);

}
