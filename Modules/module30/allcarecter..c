#include<string.h>
#include<string.h>

int main(){

    int n;
    while( scanf("%d", &n ) ){
        char a[101];
        getchar();
        gets(a);
        int mark[27];
        for( int i = 0; i <= 27; i++ ){
            mark[i] = 0;
        }
        for( int i = 0; i < strlen(a); i++ ){
            int d;
            if( a[i] >= 'a' && a[i] <= 'z' ){
                d=a[i]-'a'+1;
                mark[d]=1;
            }else{
                d=a[i]-'A'+1;
                mark[d]=1;
            }
        }
        int p = 1;
        for( int i = 1; i <= 26; i++ ){
            if( mark[i] == 0 ){
                p = 0;
                break;
            }
        }
        if( p == 1 ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

}
