#include <stdio.h>
#include <stdlib.h>

int main(){
	struct student{
		char name[30];
		int age;
		char class[10];
		char sem;
	};

	struct student nishchal={"Nishchal Rai",20,"BCA",3};//assagining value after creating an object

	nishchal.age=22;//changing the value

	printf("NAME: %s\n",nishchal.name);
	printf("AGE: %d\n",nishchal.age);
	printf("CLASS: %s\n",nishchal.class);
	printf("SEM: %d",nishchal.sem);
	return 0;
}