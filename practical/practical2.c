//program for binary search
#include <stdio.h>

void displayarr(int *x,int size);//displaying array
int binary_search(int *array,int left ,int right,int search);//binary search function O(log n)


int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int arr_length=sizeof(arr)/sizeof(int);

	int data,result;

	printf("_______________Array_______________\n\n");
	displayarr(arr,arr_length);

	printf("\nEnter an Integer to search for: ");
	scanf("%d",&data);
	result=binary_search(arr, 0, (arr_length-1),data);
	
	//ternary operation
	(result==-1)?printf("%d is not in the list",data) : printf("index position of %d: %d",data,result);

	return 0;
}

int binary_search(int *array,int left,int right,int search){
	int mid;
	if(left<=right){ mid=left+((right-left)/2);
	
	if(array[mid]==search) return mid;

	if(search<array[mid]) return binary_search(array,left,mid-1,search);
	else{
		return binary_search(array,mid+1,right,search);
		}		
}

return -1;
}

void displayarr(int *x,int size){
	for(int i=0;i<size;i++)
		printf("%5d",x[i]);
}