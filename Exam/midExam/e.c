#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf( "%d", &n );

    char str[n+1];
    scanf( "%s", str );

    int i,letters_value[26] = {0}, alphabet_count = 0;

    for(i=0;str[i]!='\0';i++)
    {
        if('a'<=str[i] && str[i]<='z')
        {
            alphabet_count+=!letters_value[str[i]-'a'];
            letters_value[str[i]-'a']=1;
        }
        else if('A'<=str[i] && str[i]<='Z')
        {
            alphabet_count+=!letters_value[str[i]-'A'];
            letters_value[str[i]-'A'] = 1;
        }
    }

    if(alphabet_count == 26)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

    return 0;
}
