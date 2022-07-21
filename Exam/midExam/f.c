#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>

int main()
{

    long long int n;

    scanf("%lld", &n);
    int big_number = 0;

    for (int i = 0; i < 20; i++)
    {
        int number = n % 10;
        n /= 10;

        if (number == 4 || number == 7)
        {
            big_number++;
        }
    }

    if (big_number == 4 || big_number == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
