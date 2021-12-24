#include <stdio.h>
#include <stdlib.h>

void push(int data);
void pop();
void display(int *stack,int top);
void reverse();

#define MAX_SIZE 10

struct stacks{
	int stack[MAX_SIZE];
	int top;
}primary,additional;

int main(){
	primary.top=0;
	additional.top=0;

	push(10);
	push(11);
	push(32);
	push(64);
	push(128);

	display(primary.stack,primary.top);
	printf("\nasdf\n%d",primary.stack[primary.top]);

	reverse();
	printf("\n\n");
	display(additional.stack,additional.top);

	return 0;
}

void push(int data){
	if(primary.top>=MAX_SIZE){
		printf("Stack overflow");
		return;
	}
	else{
		primary.stack[primary.top]=data;
		primary.top++;
	}
}

void pop(){
	if(primary.top<0){
		return;
	}
	else{
		primary.top--;
	}
}

void display(int *stack,int top){
	for(int i=0;i<top;i++){
		printf("%5d\t",stack[i]);
	}
}

void reverse(){

	for(int i=0;i<primary.top;i++){
	additional.stack[additional.top]=primary.stack[primary.top];
	pop();
	additional.top+=1;
}
}