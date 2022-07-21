#include<stdio.h>
struct Time
{
   int hour;
   int minute;
   int second;
};
int main(){

   struct Time currTime = {6, 30, 45};
   char dayOrNight[3];
   printf( "PM or AM?:" );
   scanf( "%s", &dayOrNight );

   if (dayOrNight[0] == 'P')
   {
       if (currTime.hour == 24)
       {
           printf( "00:%d:%d PM\n",  currTime.minute, currTime.second);
       }
       else{
           printf( "%d:%d:%d PM\n",  currTime.hour + 12, currTime.minute, currTime.second);
       }
   }
   else{
       printf( "%d:%d:%d AM\n",  currTime.hour, currTime.minute, currTime.second);
   }
   return 0;
}
