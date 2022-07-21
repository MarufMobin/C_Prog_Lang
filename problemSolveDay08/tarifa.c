#include<stdio.h>

int main(){
    int limit, months;
    scanf("%d %d", &limit, &months);
    int restMonthLimit = 0;
    for( int m = 1; m <= months; m++){
        int used;
        scanf("%d", &used);
        int monthLimit =  limit + restMonthLimit;
        restMonthLimit = monthLimit - used;

    }
    int final_limit = limit + restMonthLimit;
    printf("%d\n", final_limit);

}
 printf("Limit %d , used %d , rest %d", monthLimit, used, restMonthLimit);
