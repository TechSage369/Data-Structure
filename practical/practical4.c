// program for selection sort
#include <stdio.h>

void displayarr(int *array,int size);
void selection_sort(int *array,int size);

int main(){

	int arr[]={43,243,67,23246,67,342,46,6768,25,245,6,456,24,246,26,2677,834,784};
	int arr_length=sizeof(arr)/sizeof(int);

	printf("\n_______________Unsorted array_______________\n\n");
	displayarr(arr,arr_length);

	selection_sort(arr,arr_length);

	printf("\n_______________Sorted array_______________\n\n");
	displayarr(arr,arr_length);



return 0;
}
void selection_sort(int *array,int size){
	int i,j,min_index,temp;

	for(i=0;i<size-1;i++){
		min_index=i;

		for(j=i+1;j<size;j++){
			if(array[min_index]>array[j]){
				min_index=j;
			}
		}
	temp=array[min_index];//swaping
	array[min_index]=array[i];
	array[i]=temp;
	}
}


void displayarr(int *array,int size){
	for(int i=0;i<size;i++)
		printf("%5d\t",array[i]);

}