//Make a function named foo() which prints “foo\n” and a function named bar() which prints “bar\n”. Call function foo() in the main() function and call function bar()  in the foo() function after printing. What will be the output?

#include<stdio.h>

void foo(){
    printf("foo\n");
    bar();
}
void bar(){
    printf("bar\n");
}

int main(){
    foo();
}

