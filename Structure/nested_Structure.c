#include <stdio.h>


struct address{
	int houseNumber;
	int pincode;
};
struct employee{
	char name[30];
	int age;

	struct address derived_address;
};


int main(){

	struct employee nishchal={name:"nishchal",age:22,derived_address:{houseNumber:742,pincode:734102}};
printf("Name: %s\nAge: %d\nHouse No: %d\nPincode: %d",nishchal.name,nishchal.age,nishchal.derived_address.houseNumber,nishchal.derived_address.pincode);

	struct employee swaroop={"Swaroop",20,{321,134413}};//initilazion

	char *name=swaroop.name;
	int *age=&swaroop.age;
		*age=22;//changing age
	int houseno=swaroop.derived_address.houseNumber;
	int pin=swaroop.derived_address.pincode;

printf("\n\nName: %s\nAge: %d\nHouse No: %d\nPincode: %d",name,*age,houseno,pin);
	
	return 0;
}