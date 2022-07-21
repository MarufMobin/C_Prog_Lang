#include <stdio.h>
void reverceArray(int * array, int size)
{
    int * arrayEnd = (array + size - 1);


    while(array <= arrayEnd)
    {
        printf("%d, ", *array);
        array++;
    }
}

int main()
{
    int array[100];
    int size;
    int *left = array;
    int *right;


    scanf("%d", &size);
    right = &array[size - 1];

    while(left <= right)
    {
        scanf("%d", left++);
    }

    left = array;


    while(left < right)
    {
        *left  ^= *right;
        *right ^= *l;
        *left  ^= *right;

        left++;
        right--;
    }
    reverceArray(array, size);


    return 0;
}
