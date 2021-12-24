#include <stdio.h>
#include <string.h>

int main(){

	struct students{
		char name[30];
		int age;
	};

struct students student1;
struct students *ptr;
ptr=&student1;

ptr->age=12;
strcpy(ptr->name,"Nishchal");

printf("%s %d",ptr->name,ptr->age);
	



	return 0;
}