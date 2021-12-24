//Program to search for an element using linear search.
#include <stdio.h>

void displayarr(int *x,int size);

int arr[]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
int size_array=sizeof(arr)/sizeof(int);//to calculate n items in an array



int main(){
	int search_item,flag=0;
	printf("_______________Element in an array_______________\n\n");
	displayarr(arr,size_array);

	printf("\n\nEnter an integer to search for an element using linear search: ");
	scanf("%d",&search_item);

	for(int i=0;i<size_array;i++){
		if(search_item==arr[i]){
			printf("\n\nIndex position of %d: %d\n\n",arr[i],i);
			printf("position: %d",i+1);
			flag++;
			break;
		}
	}
	//for input which not in the list
	if(flag==0){
		printf("\n!!result not found: %d",search_item);
	}


	return 0;
}

void displayarr(int *x,int size){
	for(int i=0;i<size;i++)
		printf("%5d",x[i]);
}
