//Implement the makeStrCopy function. Remember that, It takes a string in copies to an output string out.
//The signature should be void makeStrCopy(char in[], char out[]). For example - if in = “hello”,
// after calling makeStrCopy, out should also be “hello”


#include <stdio.h>
#include <string.h>
void makeStrCopy(char input[], char out[]){
   for (int i = 0; input[i] != '\0' ; i++)
   {
       out[i] = input[i];
   }
}

int main(){
   char string[] = "hello";
   char copyString[6];
   makeStrCopy(string, copyString);
   printf( "%s\n", copyString );
   return 0;
}

