//#include<stdio.h>
//
//int main(){
/////ONe Number mcq
////int arr[6]={1,2,3,4,5,6};
////    printf("%d %d",arr[arr[3]-1],arr[arr[3]+1]);
//        int arr[6]={1,2,3,4,5,6};
//     long long x=&arr[0],y=&arr[4];
//     printf("%lld",y-x);
//}


//#include<stdio.h>
//int main()
//{
//    char str[]={'g','l','o','b','e'};
//
//    printf("%s",str);
//
//    return 0;
//}
#include<stdio.h>
int main()
{
     int arr[12];
   int res=sizeof(arr)/sizeof(arr[2]);
   printf("%d",res);
}
