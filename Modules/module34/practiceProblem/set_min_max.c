///Write a function named set_min_max() which will take two values in such a way so that
/// if you change the value, it will be affected to the original one also. Then set the minimum value
///of them to the first one, and maximum value to the second one.

#include<stdio.h>
void set_min_max( int one, int two ){
    if( one < two ) {
        printf("The smaller Value %d ", one );
        printf("The Larger Value %d", two );
        return 0;
    }
    else{
       printf("The smaller Value %d ", two );
       printf("The Larger Value %d", one );
       return 0;
    }
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    set_min_max(a,b);
    return 0;
}

