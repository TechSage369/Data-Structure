#include <stdio.h>
//#include <stdlib.h>

#define MAX_SIZE 10

void display(int *stack,int top);
void push(int data);
void pop();
void reverse();

struct stacks{
		int stack[MAX_SIZE];
		int top;
}primary,secondary;



int main(){
	primary.top=0;
	secondary.top=0;

	push(13);
	push(14);
	push(15);
	push(16);
	printf("\noriginal stack\n");
	display(primary.stack,primary.top);
	reverse();

	printf("\nreversed stack\n");
	display(secondary.stack,secondary.top);
	return 0;
}

void display(int *stack,int top){
	for(int i=0;i<top;i++){
		printf("%5d\t",stack[i]);
	}
}

void push(int data){
	if(primary.top==MAX_SIZE-1){
		printf("\nStack Overflow\n");
		return;
	}
	primary.stack[primary.top]=data;
	primary.top++;
}
void pop(){
	if(primary.top<0) return;
	else{
		primary.top--;
	}
 }
 void reverse(){
 	if(primary.top!=0){
 	secondary.stack[secondary.top]=primary.stack[primary.top-1];
 	pop();
 	secondary.top++;
 	reverse();
 }	
 }

