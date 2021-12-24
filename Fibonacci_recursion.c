#include <stdio.h>
#include <stdlib.h>

void fibonacci(int inp1, int inp2, int number_of_series,int max);


int main(){
		int series;
		int inp_first,inp_second;

		// inp_first=0;
		// inp_second=1;

		printf("Program to generate Fibonacci Series!\n\nEnter a number of series: ");
		scanf("%d",&series);
		printf("Enter first digit for series: ");
		scanf("%d",&inp_first);
		printf("Enter second digit for series: ");
		scanf("%d",&inp_second);
		fibonacci(inp_first,inp_second,series,series);//first series = no. of series and second series is a maximum number of series used for track series
					//input series

	return 0;
}
void fibonacci(int inp1, int inp2,int number_of_series,int max){
	if(max<1) return;
	if(max==1){ printf("%5d",inp1);
		return;
	}
	if(max==number_of_series){//for first two output
		printf("%5d   %5d",inp1,inp2);
	}


	if(number_of_series==2) return;

	printf("%5d  ",inp1+inp2);

	return fibonacci(inp2,(inp1+inp2),number_of_series-1,max);

}