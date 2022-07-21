//How many different ways are there to use functions? Explain with examples.

//Has Parameter Has return
//#include<stdio.h>
//int sum( int a, int b ){
//    return a + b;
//}
//
//int main(){
//  int a, b;
//  scanf("%d %d", &a, &b);
//  int result = sum(a,b);
//  printf("%d", result);
//}


//Has parameter No return
//#include<stdio.h>
//void sum( int a , int b ){
//    printf("%d", a+b);
//}
//int main(){
//    int a = 5, b=5;
//    sum( a, b);
//    return 0;
//}


//No parameter Has return
//#include<stdio.h>
//int sum(void){
//    int a, b;
//    scanf("%d %d", &a, &b );
//    return a + b;
//}
//int main(){
//   int result = sum();
//    printf("%d", result);
//    return 0;
//}

//No parameter No return
//#include<stdio.h>
//void sum(void){
//    int a, b;
//    scanf("%d %d", &a, &b );
//    printf("%d", a+b );
//}
//int main(){
//    sum();
//    return 0;
//}


//Take an integer N as input and write a for loop
//that prints all values from 1 to N that are divided by 2 and 7

//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d", &n);
//
//    for( int i = 1; i <= n; i++ ){
//        if( i % 2 == 0 || i % 7 == 0 ){
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//What are pointers? Give some examples of pointers.
//Make a pointer that points to a structure variable (format is given below),
//and change the value of sum using pointer.
//struct Fun
//{
//    int sum;
//}


//Pointer Means one kind of temporary memory address where a variable and any kind of value there store temporary but if we use array then pointer store first index address also if we use pointer then use * ( star stick ) sing
// Such as: int *Pfirst = 10; -> Define if use the address then int second = &Pfirst; -> if i want to both address printf("%d %d", second, &Pfirst);




//Take an integer N as input and make a pattern for that number. Sample is given below:

//#include<stdio.h>
//
//int main(){
//    int n;
//    scanf("%d", &n);
//
//    for( int i = 1; i <= n; i++ ){
//        for( int j = 0; j < i; j++ ){
//            printf("*");
//        }
//        printf("\n");
//    }
//    for( int i = n-1; i >= 1; i-- ){
//        for( int j = 0; j < i; j++ ){
//            printf("*");
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}






//I Love Programming!

//#include<stdio.h>
//int main(){
//    for( int i = 1; i <= 100; i++ ){
//        if( i % 2 != 0 ){
//            printf("I Love Programming!\n");
//        }else{
//            printf("Goodbye\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main(){
//    char ch[1000];
//    scanf("%s",&ch);
//    int counter[11]={0};
//    for( int i = 0; i < strlen(ch); i++ ){
//        char val = ch[i];
//        counter[val-48] = 1;
//    }
//    for( int i = 0; i <= 9; i++ ){
//        if( counter[i] != 1 ){
//            printf("NO\n");
//            return 0;
//
//        }
//    }
//    printf("YES\n");
//    return 0;
//}

// Write a function named change_values() which will take an array of integers ar[],
//the size of the array N, and two more integer values L and R.
//You need to change all the values of the array between L-th index and R-th index to 0.
//Print the array in the  main() function. Here, (0 <= L,R < N  and 0 < N <=100000 and 0 <= ar[i] <= N)


//#include<stdio.h>
//
//void change_values( int ar[], int N, int L, int R ){
//    for( int i = L; i <= R; i++ ){
//        ar[i] = 0;
//    }
//}
//
//int main(){
//    int ar[]={10,20,30,40,50};
//    int N=5, L=3, R=5;
//    change_values( ar, N, L, R );
//    for( int i = 0; i < N; i++ ){
//        printf("%d ", ar[i]);
//    }
//}


//Take an array name ar[] of size N where the values will be unique.
//Also take another integer value named mul as input.
//Print “YES” if you can make  mul by multiplying two different values from that array.
//Otherwise, print “NO”. Here, (0 < N <= 100 and 0 <= ar[i] <= N and 0 <= mul <= 10000)
#include<stdio.h>
int main(){
    int n, mul;
    scanf("%d", &n);

    int ar[n];
    for( int i = 0; i < n; i++ ){
        scanf("%d", &ar[i]);
        for( int j = 0; j < i; j++ ){
            if( ar[i] != ar[j] ){
                continue;
            }else{
                printf("Please Enter Unique Number of array all items");
                return 0;
            }
        }
    }
    scanf("%d", &mul);

    for( int i = 0; i < n; i++ ){
        for( int j = i; j < n; j++ ){
            if( ar[i] * ar[j+1] == mul ){
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");

    return 0;
}

