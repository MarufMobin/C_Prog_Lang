//#include<stdio.h>
//
//struct Date {
//
//    int date,year,month;
//
//};
//
//int main()
//
//{
//
//    struct Date date1={28,12,2022};
//    printf("%d", date1.year);
//    return 0;
//
//}
//The 2nd
//#include<stdio.h>
//
//struct st
//
//{
//
//    int x;
//
//    int ar[5];
//
//};
//
//int main()
//
//{
//
//    printf("%d", sizeof(struct st));
//
//    return 0;
//
//}


// The 3rd One

//#include<stdio.h>
//
//struct st
//
//{
//
//    int x;
//
//    struct st next;
//
//};
//
//
//
//int main()
//
//{
//
//    struct st temp;
//
//    temp.x = 10;
//
//    temp.next = temp;
//
//    printf("%d", temp.next.x);
//
//    return 0;
//
//}


//4no
//# include <stdio.h>
//
//# include <string.h>
//
//struct Test
//
//{
//
//  char str[20];
//
//};
//
//int main()
//
//{
//
//  struct Test st1, st2;
//
//  strcpy(st1.str, "PhitronQuiz");
//
//  st2 = st1;
//
//  st1.str[0] = 'S';
//
//  printf("%s",st2.str);
//
//  return 0;
//
//}


/// 6 no
//#include<stdio.h>
//
//struct Point
//
//{
//
//  int x, y, z;
//
//};
//
//int main()
//
//{
//
//  struct Point p1 = {.y = 0, .z = 1, .x = 2};
//    printf("%d", p1.y);
//  return 0;
//
//}

#include<stdio.h>

struct site

{

    char name[] = "Hello";

    int no_of_pages = 200;

};

int main()

{

    struct site ptr;

    printf("%d ", ptr.no_of_pages);

    printf("%s", ptr.name);

    return 0;

}

