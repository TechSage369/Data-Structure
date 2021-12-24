#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void display(int **array,int a,int b);
void input(int **array,int a,int b);

int main(){
	int a,b;
	printf("Declare the size of 2d array: ");
	scanf("%d %d",&a,&b);
	int first_array[a][b];
	int second_array[a][b];

	printf("\n__________Insertion in first array__________\n\n");
	input(first_array,a,b);
	display(first_array,a,b)





	return 0;
}


void display(int **array,int a,int b){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%5d\t",array[i][j]);
		}
	}
	printf("\n");
}

void input(int **array,int a,int b){
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
			printf("Enter an integer array[i][j]: ");
			scanf("%d",&array[i][j]);
		}
	}
}