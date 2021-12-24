#include <stdio.h>

	void printarray(int array[],int size_of_array){
			for(int i=0;i<size_of_array;i++) printf("%5d",array[i]);
	}

	int main(){
			int arr[8]={1,2,3,4,5,6,7};
			int n=(sizeof(arr)/sizeof(int)-1);
			int item=60,loc=2;

			printf("________________Original Array__________________\n\n");
			printarray(arr,n);


			for(int i=n;i!=loc;i--){
				arr[i]=arr[i-1];
			}
			arr[loc]=item;
			n+=1;

			printf("\n\n________________Inserted Array__________________\n\n");
			printarray(arr,n);	

		return 0;
	}