#include<stdio.h>
#include<string.h>

//intertwined structures

struct Address{
	
	char neighborhood[20];
	char street[20];

};

struct Student{
	
	char name[20];
	char last_name[20];
	int number;
	int age;
	struct Address adress;//I have defined the object of another structure in one structure.
};

int main(){
	
	struct Student student1;
	
	strcpy(student1.name,"Seyda");
	strcpy(student1.last_name,"Ari");
	student1.number=1111;
	student1.age=20;
	
	strcpy(student1.adress.neighborhood,"Baglica");
	strcpy(student1.adress.street,"7th street");
	
	printf("Student's name is:%s\nStudent's last name is:%s\nStudent's number is:%d\nStudent's age is:%d\n",student1.name,student1.last_name,student1.number,student1.age);
	printf("Student's neighborhood is:%s\nStudent's street is:%s",student1.adress.neighborhood,student1.adress.street);
	
	
	return 0;
}
