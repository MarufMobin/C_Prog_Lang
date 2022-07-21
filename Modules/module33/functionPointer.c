//#include<stdio.h>
////void change( int *x ){
////    *x = -100;
////}
//void change( int in[] ){
//    for( int i = 0; i < 5; i++ ){
//        in[i] += 100;
//    }
//}
//
//int main(){
//
////    int a = 10;
////    change(a);
////    change(&a);
////    printf("%d", a);
//    int a[5] = {10 , 20 , 30 , 40 , 50 };
//    change(a);
//    for( int i = 0; i < 5; i++ ){
//        printf("%d ", a[i]);
//    }
//    return 0;
//
//}

//#include<stdio.h>
//
//int main()
//
//{
//	int a[] = {1,6,3,4,5}, *p;
//
//	p = a;
//
//	++*p;
//	++*p;
//
//	printf("%d ", *p);
//
//	p += 2;
//
//	printf("%d ", *p);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{
//	char mystring[] = "abcdefg";
//
//	char *ptr = mystring;
//
//    printf("%s",ptr);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{
//
//    char mystring[] = "abcdefg";
//
//    char *ptr = mystring;
//
//    ptr+=5;
//
//    printf("%s",ptr);
//
//    return 0;
//
//}
#include<stdio.h>

int main()

{
    char str[]="hello";

    char *ptr = str;

    printf(ptr);

    return 0;
}
