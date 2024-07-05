#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct Person{
	char Name[102];
	int age;
	double money;
	double debt;
};

void initializePerson(struct Person *person, const char *name);

int main(void){
	srand(time(NULL));
	char inputName[102];
	printf("Input Name: ");
	struct Person person;
	while(fgets(inputName,sizeof(inputName),stdin)!=NULL){
		char *ptr=inputName;
		while(*ptr!='\n')
			ptr++;
		*ptr='\0';
		if(strcmp(inputName,"0")==0){
			break;
		}
		else{
			initializePerson(&person,inputName);
			printf("Name:%s\nAge:%d\nMoney%d\nDebt:%d\n",person.Name,person.age,(int)person.money,(int)person.debt);
		}
		printf("Input Name: ");
	}
	printf("Finish!\n");
	return 0;
}

void initializePerson(struct Person *person, const char *name){
	strcpy(person->Name,name);
	person->age=rand()%51+10;
	person->money=rand()%150001+150000;
	person->debt=rand()%50001+50000;
}
