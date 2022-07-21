//Make a function named odd_even() which takes an integer value and tells whether this value is even or odd. You need to do it in 4 ways:


//i) Has return + Has parameter

#include<stdio.h>
#include<stdbool.h>
int odd_even( int val ){
    if( val % 2 == 0 ) return true;
    else                return false;
}

int main(){
    int val;
    scanf("%d", &val);
    bool result = odd_even( val);
    if( result ){
        printf("Even");
    }else{
        printf("Odd");
    }
}




//ii) No return + Has parameter

#include<stdio.h>
void odd_even( int n){
    if( n % 2 == 0 ){
        printf("Even");
    }else{
        printf("Odd");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    odd_even(n);
}



//iii) Has return + No parameter

#include<stdio.h>
#include<stdbool.h>
int odd_even(){
    int n;
    scanf("%d", &n);
    if( n % 2 == 0 ){
        return true;
    }else{
        return false;
    }
}

int main(){
   bool result = odd_even();

   if( result ){
        printf("Even");
   }else{
        printf("Odd");
   }
}


//iv) No return + No parameter
#include<stdio.h>
void odd_even(void){
    int n;
    scanf("%d", &n);
    if( n % 2 == 0 ){
        printf("Even");
    }else{
        printf("Odd");
    }
}

int main(){
    odd_even();
}
