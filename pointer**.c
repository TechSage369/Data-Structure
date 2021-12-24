#include <stdio.h>

int main(){

	int x[2][3]={
				{1,2,3},
				{4,5,6}
				};

	printf("%d",(*(*(x+1)+1))); //=x[1][1]=5

	return 0;
}