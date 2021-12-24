/* program for merge sort */
#include <stdio.h>

void displayarr(int *array,int size);
void merge_sort(int *array,int left,int right);
void merge(int *array,int left,int middle,int right);


int main(){
	int arr[]={2334,3245,234,56,567,997,455,24,46,66,37,735,356,3546,677,33,334};
	int arr_length=sizeof(arr)/sizeof(int);

	printf("_______________Unsorted array_______________\n\n");
	displayarr(arr,arr_length);

	merge_sort(arr,0,arr_length-1);
	printf("\n\n_______________Sorted array_______________\n\n");
	displayarr(arr,arr_length);





	return 0;
}
//printing function
void displayarr(int *array,int size){
	for(int i=0;i<size;i++) printf("%5d\t",array[i]);
}

//merge_sorting function
void merge_sort(int *array,int left,int right){
	if(left<right){
		int middle=(left+right)/2;
		merge_sort(array,left,middle);
		merge_sort(array,middle+1,right);
		merge(array,left,middle,right);

	}
}

//function to merge
void merge(int *array,int left,int middle,int right){
	int i, j, k;  
    int n1 = middle - left + 1;    
    int n2 = right - middle;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = array[left + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = array[middle + 1 + j];    
      
    i = 0; /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = left;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            array[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            array[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        array[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        array[k] = RightArray[j];    
        j++;    
        k++;    
    }    }

