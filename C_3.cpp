#include <stdio.h>
int width,height ; 
float square;

main(){
	printf("Enter Width:");
	scanf("%d",&width);
	printf("Enter Height:");
	scanf("%d",&height);
	square = width*height;
	printf("Width = %d \n Height = %d \n Square = %.2f",width,height,square);
}
