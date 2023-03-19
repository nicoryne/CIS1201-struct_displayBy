typedef struct {
	char firstname[50];
	char lastname[50];
	int age;
}info;

typedef struct{
	info people[10];
	int count;
}person;

void display(person list, int count){
	//Displays the current list as is.
	int i;
	printf("[CURRENT LIST]\n");
	for(i = 0; i < count; i++){
		printf("===PERSON [%d]'s INFO===\n", i + 1);
		printf("Name: %s %s\n", list.people[i].firstname, list.people[i].lastname);
		printf("Age: %d\n", list.people[i].age);
		printf("========================\n");
	}
}

void displayByAge(person list, int count){
	//Sort the people in the current list
	//based on their age from young to oldest.
	int i, j;
	person temp;
	temp.people[1];
	printf("[DISPLAY BY AGE]\n");
	for(i = 0; i < count; i++){
		for(j = 0; j < count - i - 1; j++){
			if(list.people[j].age > list.people[j + 1].age){
				temp.people[0] = list.people[j];
				list.people[j] = list.people[j + 1];
				list.people[j + 1] = temp.people[0];
			}
		}
	}
	
	for(i = 0; i < count; i++){
		printf("===PERSON [%d]'s INFO===\n", i + 1);
		printf("Name: %s %s\n", list.people[i].firstname, list.people[i].lastname);
		printf("Age: %d\n", list.people[i].age);
		printf("========================\n");
	}
}

person addPerson(person list, int count){
	//Adds a person to the current list/array.
	list.count++;
	printf("[ADD PERSON]\n");
	printf("========================\n");
	printf("First Name: ");
	scanf("%s", list.people[count].firstname);
	printf("Last Name: ");
	scanf("%s", list.people[count].lastname);
	printf("Age: ");
	scanf("%d", &list.people[count].age);
	
	return list;
}

person deletePerson(person list, int count, char nameToRemove[50]){
	//Removes a person based on their firstname from the list.
	int i, j;
	for(i = 0; i < count; i++){
		if(strcmp(list.people[i].firstname, nameToRemove) == 0){
			for(j = i; j < count; j++){
				list.people[j] = list.people[j + 1];
			}
			list.count--;	
			return list;	
		}
	}
	return list;
}

