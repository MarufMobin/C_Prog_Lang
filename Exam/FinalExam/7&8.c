Question No: 07


How can you use the return by address mechanism to return two integers from a function? Explain with an example.

Ans:
In the main function, I use num1 and num2 variables as output and they are going to returnByAddress function as inputs and they have no initial value. This is the return by address mechanism.
Here is an example of a return by address mechanism:
#include<stdio.h>
#include <string.h>

int returnByAddress(int *n1, int *num2){

    *n1 = 10;
    *num2 = 20;
    return 0;
}

int main(){

    int n1, num2;

    returnByAddress(&n1, &num2);

    printf( "%d %d", n1, num2 );

    return 0;
}

Question No: 08
stringCat(char a[], char b[], char out[]) The strcat function takes two strings and concats them and outputs them to a out. Assume that out has enough space to hold contents of both a and b. Implement the function.

Ans:
This stringCat function takes two strings and one empty string. Then it Concat two string and store the concatenated string into an "out" string.

#include<stdio.h>
#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

void stringCat(char *a, char *b, char *out){
    int length = 0;
    while (a[length] != '\0')
    {
        length++;
    }
    for (int i = 0; b[i] != '\0'; i++, length++)
    {
        a[length] = b[i];
    }
    a[length] = '\0';
    for (int i = 0; i < length; i++)
    {
        out[i] = a[i];
    }
    out[length] = '\0';
}
int main(){
    char str1[] = "Phitron";
    char str2[] = "programming";
    char out[100];
    stringCat(str1, str2, out);

    for (int i = 0; i < strlen(out); i++)
    {
        printf( "%c", out[i] ); // output: Phitronprogramming
    }

    return 0;
}
