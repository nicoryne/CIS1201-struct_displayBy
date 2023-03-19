#include<stdio.h>
#include<string.h>
#include "displayBy.h"

int main(){
	person list;
	int choice = 0, count;
	char deleteName[50];
	char enter;
	
call_options:
		printf("============FUNCTIONS============\n");
		printf("1. | Display List\n");
		printf("2. | Display By Age\n");
		printf("3. | Add Person to List\n");
		printf("4. | Delete Person from List\n");
		printf("5. | Quit Program\n");
		scanf("%d", &choice);
		
switch(choice){
	case 1:
		system("cls");
		
		display(list,count);
		printf("Enter any key to go back\n");
		scanf("%s", &enter);
		
		system("cls");
		goto call_options;
	case 2:
		system("cls");
		
		displayByAge(list,count);
		printf("Enter any key to go back\n");
		scanf("%s", &enter);
		
		system("cls");
		goto call_options;
	case 3:
		system("cls");
		
		list = addPerson(list,count);
		count = list.count;
		
		system("cls");
		goto call_options;
	case 4:
		system("cls");
		
		printf("Enter name to delete: ");
		scanf("%s", deleteName);
		
		list = deletePerson(list,count,deleteName);
		count = list.count;
		
		system("cls");
		goto call_options;
	case 5:
		system("cls");
		break;
	default:
		system("cls");
		printf("Invalid Option. Please try again\n");
		goto call_options;
	}
	
	return 0;
}
