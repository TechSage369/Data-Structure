#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};



int main(){

	struct node *ptr,*link;

	link->data=10;
	link->next=NULL;

	 // printf("%d",link->data);
	 ptr=(struct node*)malloc(sizeof(struct node*));
	 link->next=ptr;
	 ptr->data=30;

	 link->next->data=324;

	 printf("%d %d",link->data,ptr->data);
	 printf("\nAddress of first node: %p",link);
	 printf("\naddress of second node: %p",ptr);
	 printf("\n address of link next %p",link->next);

	return 0;
}