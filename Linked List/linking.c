#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next_link;
};
int main(){
	struct node *ptr;
	struct node	first;
	struct node second;
	struct node third;

first.next_link=&second;
second.next_link=&third;
third.next_link=NULL;

	first.data=30;
	second.data=40;
	third.data=50;
	ptr=&first;

	for(int i=1;i<=3;i++){
		printf("node %d: %d\n",i,ptr->data);
		ptr=ptr->next_link;//shifting node/incrementing node

	}
	return 0;
}

