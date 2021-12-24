#include <stdio.h>
#include <string.h>

int main(){
	struct details{
		char name[30];
		int age;
	}first;

	struct code{
		int id;
		int colorcode;
	}codefirst;

	first.age=23;
	strcpy(first.name,"Nishchal Rai");
	printf("%s %d",first.name,first.age);


	codefirst.id=456;
	codefirst.colorcode=1344;

	printf("%d %d",codefirst.id,codefirst.colorcode);

	return 0;
}
