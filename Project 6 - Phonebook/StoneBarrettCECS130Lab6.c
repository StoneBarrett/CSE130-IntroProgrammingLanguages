// Program: Phone Book App
// Description: This program will allow users to select between adding contacts,
// deleting contacts, and viewing contacts in a virtual phone book, and use 
// functions to complete those tasks.
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 3/1/19

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void listContacts();			// Function prototypes
void addContact();
void delContact();

typedef struct
{
	char *firName;
	char *lasName;
	char *number;
	
} contactList;

contactList *cl;

int listVal = 0;

int main ()													// Start main
{
	int menuSelect = 0;
	
	while (menuSelect != 4)
	{
		printf("\n\t\t\tContacts");									// UI
		printf("\n\n\tChoose an Action");
		printf("\n\t[1] View Contacts");
		printf("\n\t[2] Create New Contact");
		printf("\n\t[3] Delete Contact");
		printf("\n\t[4] Exit\n\n");
		scanf("%d", &menuSelect);
		printf("\n\n");
		
		switch (menuSelect)
		{
			case 1:
				listContacts();
				break;
			case 2:
				addContact();
				break;
			case 3:
				delContact();
				break;
			case 4:
				printf("\n\n\t\tSee you next time!\n");
			    break;
		}
		
	}
	cl = NULL;
	free(cl);
	system("pause");
}														// End main

void listContacts()							// Function definitions
{
	int loopVal = 0;
	int listed = 0;
	
	printf("\n\t\tAll contacts: \n\t");
	
	for (loopVal = 0; loopVal < listVal; loopVal++)
	{
		if ((cl[loopVal].firName != NULL) && (cl[loopVal].lasName != NULL) && (cl[loopVal].number != NULL))
		{
		 	printf("\n[%d]\t%s\t%s\t%s\n", listed + 1, cl[loopVal].firName, cl[loopVal].lasName, cl[loopVal].number);
		 	listed++;
		}
	} 
	
	printf("\n");
	if (!listed)
		printf("You have not entered any contacts yet!\n");
}


void addContact()
{
	if (listVal == 0)
		cl = (contactList *) malloc(sizeof(contactList) + (listVal*50) + 50);
	
	else
		cl = (contactList *) realloc(cl, sizeof(contactList) + (listVal*50) + 50);
	
	if (cl == NULL)
		printf("\n\t No more contacts can be added due to low memory.\n");
		
	else
	{
		cl[listVal].firName = (char *) malloc(sizeof(char) * 20);
		cl[listVal].lasName = (char *) malloc(sizeof(char) * 20);
		cl[listVal].number = (char *) malloc(sizeof(char) * 11);
		printf("\n\tFirst name: ");
		scanf("%s", cl[listVal].firName);
		printf("\n\tLast name: ");
		scanf("%s", cl[listVal].lasName);
		printf("\n\tPhone number: ");
		scanf("%s", cl[listVal].number);
		
		listVal++;
		
		printf("\n\tContact saved.");
	}		
	
}

void delContact()
{
	char *firNamex = (char *) malloc(sizeof(char) * 20);
	char *lasNamex = (char *) malloc(sizeof(char) * 20);
	
	int loopVal = 0;
	int deleted = 0;
	
	printf("\n\tFirst name: ");
	scanf("%s", firNamex);
	printf("\n\tLast name: ");
	scanf("%s", lasNamex);
	
	for (loopVal = 0; loopVal < listVal; loopVal++)
	{
		if ((strcmp(cl[loopVal].firName, firNamex ) == 0) && (strcmp(cl[loopVal].lasName, lasNamex) == 0))
		{
			cl[loopVal].firName = NULL;
			cl[loopVal].lasName = NULL;
			cl[loopVal].number = NULL;
			deleted = 1;
			break;
		}
	}
	
	if (deleted == 1)
		printf("\n\tContact removed.");
	else
		printf("\n\tThis contact doesn't exist!");
}

