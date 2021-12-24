#include <stdio.h>
#include <stdlib.h>

void insertion(int n);

struct node{
	int data;
	struct node *next_link;//self referencetial structure
};
struct node first,*ptr;


int main(){
	int item;
	printf("Enter N number of node: ");
	scanf("%d", &item);
	return 0;
}

void insert(int n){
	int i,data;

	first.next_link=NULL;

	printf("Enter node 1: ");
	scanf("%d", &data);

	first.data=data;

	for(i=2;i<=n;i++){
		printf("Enter node %d: ",i);
		scanf("%d",&data);
		ptr=(struct node*)malloc(sizeof(struct node*));
		ptr->next_link=ptr;
		ptr->data=data;




	}

}