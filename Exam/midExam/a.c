#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, x=0, y=0;
    char S[100];
    scanf("%s",S);

    for(i=0; S[i] != '\0'; i++)
    {
        for(j=i-1; j>=0; j--)
        {
        if(S[i] == S[j])
         {
            y=1;
            break;
          }
        }
        if(y == 0)
        x++;
        y=0;
    }
    if(x%2 == 0){
    printf("CHAT WITH HER!");
    }
    else{
    printf("IGNORE HIM!");
    }
    return 0;
}

