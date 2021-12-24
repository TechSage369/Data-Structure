#include <stdio.h>
int main(){

	int a[]={12,13,14,15,16};
	int *x=a;

	for(int i=0;i<6;i++,x++){
		printf("%d\n",*x);
	}

	return 0;
}