#include <stdio.h>

void swap(int *x,int *y){//pointer for swapping 
	int swap;
	swap=*x;
	*x=*y;
	*y=swap;
}


int main(){
	int a,b;
	
	a=10;
	b=20;

	swap(&a,&b);

	printf("%d %d",a,b);



	return 0;
}