#include <stdio.h>
	


	void printarray(int array[],int size_of_array){
			for(int i=0;i<size_of_array;i++) printf("%5d",array[i]);
	}


int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	int loc=3;

	printf("_______________Original Array_______________\n\n");
	printarray(arr,n);
	

	for(int i=loc;i!=n;i++){
		arr[i]=arr[i+1];
	}

	n-=1;


	printf("\n\n_______________Array After Deletion_______________\n\n");
	printarray(arr,n);

	return 0;
}