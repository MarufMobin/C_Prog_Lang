#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct Student
{
    char fname[41];
};
struct Unique_Student
{
    char fname[41];
};
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    struct Student students[n];
    struct Unique_Student un_st[n];
    int k=0;
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        fgets(students[i].fname, 41, stdin);
        bool found = false;
        for(int j = 0; j < k ; j++)
        {
            if((strcmp(students[i].fname,un_st[j].fname)) == 0)
            {
                result++;
                found = true;
            }
        }
        if(found == false)
        {
            strcpy(un_st[k].fname,students[i].fname);
            k++;
        }
    }
    if(result)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
