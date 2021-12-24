//Program for Bubble sort
#include <stdio.h>

void displayarr(int *array,int size);
void bubble_sort(int *array,int size);



int main(){
	int arr[]={12,134,45,12,457,768,135,46,567,23,57,234,23457,448,322,5367,24566,3};
	int arr_length=sizeof(arr)/sizeof(int);
	
	displayarr(arr,arr_length);

	bubble_sort(arr,arr_length);

printf("\n_______________Sorted Array_______________\n");
	displayarr(arr,arr_length);

	return 0;
}

void bubble_sort(int *array,int size){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}

	}
}


void displayarr(int *array,int size){
	for(int i=0;i<size;i++)
		printf("%5d\t",array[i]);

}