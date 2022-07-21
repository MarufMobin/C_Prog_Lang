//F
#include<stdio.h>
#include<string.h>

int main()
{
    int t,i;
    scanf("%d",&t);

    int n;
    while(t--)
    {
        scanf("%d",&n);
        char arr[n];
        scanf("%s",arr);
        for(i=0; i<n; i++)
        {
            if(arr[i]=='8')
                break;
        }
        if((n-i)>=11)
            printf("YES\n");
        else
            printf("NO\n");

    }
}
//J
#include <stdio.h>

int main()
{
    char arr[101];

    scanf("%s", arr);
    int count=0,i=1;
    while(arr[i]!='\0')
    {
        if(arr[i]<91) count++;
        else break;
        i++;
    }

    if(arr[count+1]=='\0')
    {
        i=1;
        while(arr[i]!='\0')
        {
            arr[i]=arr[i]+32;
            i++;
        }
        if(arr[0]>90) arr[0]=arr[0]-32;
        else arr[0]=arr[0]+32;
    }
    printf("%s\n", arr);

}

//G
#include <stdio.h>

int main()
{
    char str[1000], arr[6] = "heidi";
    scanf("%s", &str);

    int x = 0;

    for (int i=0; i<strlen(str); i++)
    {
        if (str[i] == arr[x])
        {
            x++;
        }
        if (x == 5)
        {
            printf("YES");

        }
    }
    printf("NO");
}

//D
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n+1];
        for (int i = 0; i < n + 1; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            arr[x]++;
        }
        int value = -1;
        for (int i = 0; i < n + 1; i++)
        {
            if (arr[i] >= 3)
            {
                value = i;
            }
        }
        printf("%d\n", value);
    }
}
