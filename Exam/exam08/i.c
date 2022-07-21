#include<stdio.h>
#include<string.h>

int main()
{

    int n;
    scanf("%d",&n);
    char arr[n];
//    for( int i = 0; i < n; i++ )
//    {
//        scanf("%c", &arr[i]);
//    }
    scanf("%s",arr);
    int counter=0;
    int oneCounter = 0;
    for( int i = 0; i < strlen(arr); i++)
    {
        if( arr[i] == 'z' )
        {
            counter++;
        }
        else if( arr[i] == 'n')
        {
            oneCounter++;
        }
    }

    for( int i = 0; i < oneCounter; i++ ){
        printf("1 ");
    }
    for( int i = 0; i < counter; i++ ){
        printf("0 ");
    }

}

