#include<stdio.h>
struct Fraction {
    int num;
    int denom;
};
int gcd( int a , int b ){
    while( b > 0 ){
        int temp = a%b ;
        a = b;
        b = temp;
    }
    return a;
}
struct Fraction reduce( struct Fraction f ){
    int g = gcd( f.num, f.denom);
    f.num /= g;
    f.denom /= g;
    return f;
}
struct Fraction inputFraction( ){
    struct Fraction f;
    printf("Please Give me Two Number: ");
    scanf("%d %d", &f.num, &f.denom);
    return f;
}
void print( struct Fraction f ){
    printf("%d/%d ", f.num, f.denom );
}
struct Fraction add( struct Fraction a, struct Fraction b ){
   struct Fraction ans;
   ans.num = a.num*b.denom + b.num*a.denom;
   ans.denom = a.denom*b.denom ;
   return ans;
};
int main(){

   struct Fraction a, b;
   a = inputFraction();
   b = inputFraction();

   a = reduce(a);
   b =  reduce(b);

   print(a);
   printf("+ ");
   print(b);
   printf("= ");

   struct Fraction sum = add( a, b );
   sum =  reduce(sum);
   print(sum);
   printf("\n");
}
