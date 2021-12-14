// Program: Calculator
// Description: This program will ask a user to choose
// an arithmetic operation, input (a) number(s), and return a result. 
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 2/1/19

#include <stdio.h>

int main()
{
	//Opening and menu
	
	printf("\n\t\tStone Instruments Calculator App, V1");
	printf("\n\t\t\t\t\tSI-81");
	printf("\n\t\tWelcome! Please select an operation.\n\n");
	printf("Menu:");
	printf("\n[1]\tAddition");
	printf("\n[2]\tSubtraction");
	printf("\n[3]\tMultiplication");
	printf("\n[4]\tDivision");
	printf("\n[5]\tModulus (integers only)");
	printf("\n[6]\tPrime test (integers only)");
	printf("\n[7]\tExit\n\t");
	
	
	//Defining user operation
	
	int operation = 0;
	scanf("\n\n\t%d", &operation);
	
	
	//Defining case 1-4 variables
	
	float firVal = 0;
	float secVal = 0;
	
	
	//Defining case 5 variables
	
	int modFirVal = 0;
	int modSecVal = 0;
	
	
	//Defining case 6 variables
	
	int testVal = 0;
	int maxVal = 0;
	int loopVal = 0;
	
	
	
	
	
	//Switch statement. Cases 1-7: Add, Subtract, Multiply, Divide, Modulus, Prime test, Exit
	
		switch (operation)
		{
		
			case 1:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				printf("\n\t%f + %f = %f", firVal, secVal, firVal + secVal);
				break;
		
			case 2:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				printf("\n\t%f - %f = %f", firVal, secVal, firVal - secVal);
				break;
		
			case 3:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				printf("\n\t%f * %f = %f", firVal, secVal, firVal * secVal);
				break;
		
			case 4:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				printf("\n\t%f / %f = %f", firVal, secVal, firVal / secVal);
				break;
		
			case 5:
				printf("\n\tEnter the first number\n");
				scanf("\t%d", &modFirVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%d", &modSecVal);
				printf("\n\tRemainder = %d", modFirVal % modSecVal);
				break;
			
			case 6:
				printf("\n\tEnter a number\n");
				scanf("\t%d", &testVal);
					if (testVal == 1)
						printf("\n\tNot prime");
					else if (testVal == 2) 
						printf("\n\tPrime");
					else
					{
					
					if (testVal % 2 == 0)
					{
					
					printf("\n\tNot prime");
					int maxVal = ((testVal - 1) / 2);
						for (int loopVal = 2; loopVal < maxVal; loopVal++)           //IMPORTANT!! To compile this for loop, BS required "C99" mode.
						{                                                            //Tools->Compiler Options->Checked "add these commands when calling the compiler"
						if (testVal % ((2 * loopVal) + 1) == 0)                      //->"-std=c99"
							printf("\n\tNot prime");                                 //Not sure what this means, please explain! :)
						
						}
					}
					else 
					printf("\n\tPrime");
					}
				break;
			
			case 7:
				printf("\n\t\tGood bye!");
				return 0;
		
		
	
    
	
	
	
	
	
	return 0;
	
}
}
	
