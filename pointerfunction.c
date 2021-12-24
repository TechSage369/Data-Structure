#include <stdio.h>

struct node{
	int data;
	struct node *ptr;
}x;


int main(){
	int z=sizeof(x.ptr);
printf("%d %d",z,sizeof(x.data));

	return 0;
}