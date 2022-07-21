#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void charecterPos(char c, char str[], int charPos[]){

   int setIndex = 1; // count index from 1
   for (int i = 1; i <= strlen(str); i++)
   {
       if (str[i-1] == c)
       {
           charPos[setIndex] = i;

       }
       else{
           charPos[setIndex] = 0;
       }
       setIndex++;
   }

}

int main(){

   char str[101];
   fgets(str, 101, stdin);

   char myChar;
   scanf( " %c", &myChar );

   int stringLen = strlen(str);
   int charPos[stringLen];

   charecterPos(myChar, str, charPos);

   for (int i = 1; i < stringLen; i++)
   {
       if (charPos[i] >= 1)
       {
           printf( "%d ", charPos[i] );
       }

   }
   printf( "\n");

   return 0;
}
