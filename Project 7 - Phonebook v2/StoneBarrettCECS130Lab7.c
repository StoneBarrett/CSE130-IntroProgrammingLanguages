// Program: Phone Book App v2
// Description: This program will allow users to select between adding contacts,
// deleting contacts, viewing contacts, sorting contacts alphabetically, searching for a contacts,
// randomly selecting contacts, and deleting all contacts, and use 
// functions to complete those tasks.
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 3/8/19

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void listContacts();			// Function prototypes
void addContact();
void delContact();
void alphabetize();
void searchContact();
void randContact();
void wipe();

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
	
	while (menuSelect != 8)
	{
		printf("\n\t\t\tContacts");									// UI
		printf("\n\n\tChoose an Action");
		printf("\n\t[1] View Contacts");
		printf("\n\t[2] Create New Contact");
		printf("\n\t[3] Delete Contact");
		printf("\n\t[4] Sort Contacts");
		printf("\n\t[5] Search Contacts");
		printf("\n\t[6] Random Contact");
		printf("\n\t[7] Delete All Contacts");
		printf("\n\t[8] Exit\n\n");
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
				alphabetize();
				break;
			case 5:
				searchContact();
				break;
			case 6:
				randContact();
				break;
			case 7:
				wipe();
				break;
			case 8:
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

void alphabetize()
{
	int loopValx, loopValy;
	int firstOrLast = 0;
	
	contactList *part;
	part = (contactList *) malloc(sizeof(contactList) + 50);
	
	system("cls");
	
	if (listVal == 0)
	{
		printf("\nYou have not entered any contacts yet!\n");
		system("pause");
	}
	else
	{
		printf("\nHow would you like to sort your contacts?\n");
		printf("\n\t[1] By first name");
		printf("\n\t[2] By last name\n");
		scanf("%d", &firstOrLast);
		printf("\n");
		
		switch(firstOrLast)
		{
			case 1:
				for (loopValx = 0; loopValx < listVal; loopValx++)
				{
					for (loopValy = 0; loopValy < listVal; loopValy++)
					{
						if (strcmp(cl[loopValx].firName, cl[loopValy].firName) < 0)
						{
							part[0] = cl[loopValx];
							cl[loopValx] = cl[loopValy];
							cl[loopValy] = part[0];
						}
					}
				}
				break;
				
			case 2:
				for (loopValx = 0; loopValx < listVal; loopValx++)
				{
					for (loopValy = 0; loopValy < listVal; loopValy++)
					{
						if (strcmp(cl[loopValx].lasName, cl[loopValy].lasName) < 0)
						{
							part[0] = cl[loopValx];
							cl[loopValx] = cl[loopValy];
							cl[loopValy] = part[0];
						}
					}
				}
				break;
		}
	}
}

void searchContact()
{
	system("cls");
	
	if (listVal == 0)
	{
		printf("\nYou have not entered any contacts yet!\n");
		system("pause");
	}
	else
	{
		//char *firNamex = (char *) malloc(sizeof(char) + 20); 
		//char *lasNamex = (char *) malloc(sizeof(char) + 20);
		
		char firNamex[20];
		char lasNamex[20];
		
		int loopVal;
		int find = 0;
		
		printf("\nFirst name: \n");
		scanf("%s", &firNamex);
		printf("\nLast name: \n");
		scanf("%s", &lasNamex);
		
		for (loopVal = 0; loopVal < listVal; loopVal++)
		{
			if ((strcmp(cl[loopVal].firName, firNamex) == 0) && (strcmp(cl[loopVal].lasName, lasNamex) == 0))
			{
				printf("\n%s %s\t%s\n\n", cl[loopVal].firName, cl[loopVal].lasName, cl[loopVal].number);
				find = 1;
			}
		}
		
		if (find == 0)
		printf("\n%s %s could not be found.\n\n", firNamex, lasNamex);		
	}
}

void randContact()
{
	int randVal = 0;
	
	system("cls");
	
	if (listVal == 0)
	{
		printf("\nYou have not entered any contacts yet!\n");
		
		system("pause");
	}
	else
	{
		randVal = rand()%listVal;
		
		printf("\n%s %s\t%s\n\n", cl[randVal].firName, cl[randVal].lasName, cl[randVal].number);
	}
}

void wipe()
{
	system("cls");
	
	if (listVal == 0)
	{
		printf("\nYour list is already empty.\n");
		
		system("pause");
	}
	
	free(cl);
	
	cl = 0;
	listVal = 0;
	
	if (cl == 0)
	{
		printf("\nAll contacts deleted.\n");
	}
}


