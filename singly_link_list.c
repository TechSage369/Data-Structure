#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;

void insert(int,int);
void delete(int);
void display();


int main(){

int item,loc,choice;
head=NULL;
while(1){
	printf("Menu\n");
	printf("1. Insert\n");
	printf("2. Delete\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("enter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1: printf("Enter the Item: ");
			scanf("%d",&item);
	}


}


	return 0;
}