#include <stdio.h>


int fibonacci(int x);


int main(){
	int n=3;

	for(int i=0;i<n;i++){
		printf("%d ",fibonacci(i));
	}

	return 0;
}

int fibonacci(int x){
	if(x==0) return 0;
	if (x==1) return 1;

return fibonacci(x-1)+fibonacci(x-2);

}