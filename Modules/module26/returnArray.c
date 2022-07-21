//#include<stdio.h>
//
//void makeNarray( int n, int out[] ){
//    for( int i = 0; i < n; i++ ){
//        out[i] = i+1;
//    }
//}
//
//int main(){
//    int n;
//    scanf("%d", &n);
//    int out[n];
//    makeNarray( n , out );
//    for( int i = 0; i < n; i++ ){
//        printf("%d\n", out[i]);
//    }
//}


// Using Malloc function to assing array number
//#include<stdio.h>
//
//int* makeNarray( int n ){
//    int *out = (int*) malloc(n*sizeof(int));
//    for( int i = 0; i < n; i++ ){
//        out[i] = i+1;
//    }
//    return out;
//}
//
//int main(){
//    int n;
//    printf("Please Give me a Number of A array : ");
//    scanf("%d", &n);
//    int* ans = makeNarray( n );
//    for( int i = 0; i < n; i++ ){
//        printf("%d ", ans[i]);
//    }
//}

// Using Structure and print a array Values
#include<stdio.h>
struct ArrayHolder{
    int array[100];
};
struct ArrayHolder makeNarray( int n ){
    struct ArrayHolder ans;
    for( int i = 0; i < n; i++ ){
        ans.array[i] = i+1;
    }
    return ans;
}

int main(){
    int n;
    printf("Please Give me a Number of A array : ");
    scanf("%d", &n);
    struct ArrayHolder ans =  makeNarray( n );
    for( int i = 0; i < n; i++ ){
        printf("%d ",  ans.array[i]);
    }
}
