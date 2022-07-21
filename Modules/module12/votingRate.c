// find the average number of Users voting

#include<stdio.h>

int main(){

//    int number_of_users;
//    scanf("%d", &number_of_users);
//    int rating[number_of_users];
//
//    for( int i = 0; i < number_of_users; i++ ){
//        scanf("%d", &rating[i]);
//    }
//    int sum = 0;
//    for( int i = 0; i < number_of_users; i++){
//        sum += rating[i];
//    }
//    double avarage = (double)(sum) / number_of_users;
//    printf("Average = %lf\n", avarage);
//
//    int count[6] = {0};
//    for( int i = 0; i < number_of_users; i++ ){
//        int x = rating[i];
//        count[x]++;
//    }
//    for( int i = 1; i <= 5; i++){
//        printf("%d -> %d \n", i, count[i]);
//    }
//    return 0;
    int fib[5];
	fib[0] = fib[1] = 1;
    for (int i=2; i<5; i++) {
    fib[i] = fib[i-1]+fib[i-2];
    }
    printf("%d", fib[4]);
}
