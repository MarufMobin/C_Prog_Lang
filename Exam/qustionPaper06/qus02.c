#include<stdio.h>

struct Time {
   int hr;
   int min;
};

struct TimeInterval
{
   struct Time start;
   struct Time End;
};

int main(){

   struct TimeInterval interval;

   printf("Enter start time:");
   scanf("%d%d", &interval.start.hr, &interval.start.min);

   printf("Enter end time:");
   scanf( "%d%d", &interval.End.hr, &interval.End.min );

   for (int i = interval.start.hr; i <= interval.End.hr;)
   {
       if (interval.start.min<60)
       {
           if (i != interval.End.hr)
           {
               interval.start.min++;
           }
           if (i == interval.End.hr && interval.start.min < interval.End.min)
           {
               interval.start.min++;
           }
       }
       else{
           i++;
           interval.start.min = 1;
       }
       printf( "Time: %d:%d\n", i, interval.start.min);

       if (i == interval.End.hr && interval.start.min == interval.End.min)
       {
           break;
       }

   }
   return 0;
}

