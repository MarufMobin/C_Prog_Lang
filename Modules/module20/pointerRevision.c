#include<stdio.h>

int main(){
    /*
    // aitar jonnow 4 byte kre jaiga lage abon print krlei buja jai
    int var;
    printf("%p %lld \n", &var, &var);
    int var2;
    printf("%p %lld \n", &var2, &var2);
    */
    double var = 2.0;
    printf("%p %lld %lf \n", &var, &var, var);
    double var2;
    printf("%p %lld \n", &var2, &var2);

    double *pvar = &var;
    printf("%p %lld\n", pvar, pvar);
    pvar++;
    printf("%p %lld\n", pvar, pvar);
}
