//stringCat(char a[], char b[], char out[]) The strcat function takes two
//strings and concats them and outputs them to a out. Assume that out has
//enough space to hold contents of both a and b. Implement the function.
#include <stdio.h>
#include <string.h>

void concatenate(char str1, char str2, char out)
{
    int i = strlen(str1), j = 0;

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  // declaring the end of the string
}

int main()
{
  char string1[100], string2[100] , out[200];
  gets(string1);
  gets(string2);

  concatenate(string1, string2, out);

  printf("%s",string1);

  return 0;
}
