#include<stdio.h>
int main(){
    int r,n,i,a[300];
	scanf("%d",&r);
	while(r) {
		scanf("%d",&n);

		for(i=0; i<n; i++)
            scanf("%d",&a[i]);
		for(i=0; i<n/2; i++)
            printf("%d %d ",a[i],a[n-i-1]);
		if(n%2!=0){
           printf("%d\n",a[n/2]);
		}else {
            printf("\n");
		}
        r--;
	}
	return 0;
}
