#include <stdio.h>
#define x 0.5
int base,high ; 
float ans;

main(){
	printf("Enter Base:");
	scanf("%d", &base);
    printf("Enter High:");
	scanf("%d", &high);
	ans = x*base*high;
	printf("Base = %d \n High = %d \n ans = %.3f",base,high,ans);
}
