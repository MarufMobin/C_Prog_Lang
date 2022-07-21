//Consider the function -
//int f(int n, int a[]) {
//     Int cnt = 0;
//     for (int i=0; i<n; i++) {
//         if (a[i] == a[0]) cnt++;
//    }
//    return cnt;
//}
//Explain what it does in one sentence. What is the return value when n = 5 and a = {1, 2,
//1, 2, 1}?


#include<stdio.h>
int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
         printf("%d a[i] => a[0] %d \n", a[i], a[0] );
    }
    return cnt;
}
int main(){
    int n = 5;
    int a[] = {1, 2, 1, 2, 1};
    int result = f( n,  a );
    printf("%d", result );
}
