// Program: Calculator #2
// Description: This program will display a menu of operations,
// ask the user to choose one & input (a) number(s), and return a result.
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 2/8/19

#include <stdio.h>
#include <math.h>
#include <unistd.h>

// Addition

float add(float, float);                 // Prototype
float add(float firVal, float secVal)    // Definition
{
	return firVal + secVal;
}

// Subtraction

float sub(float, float);                // Prototype
float sub(float firVal, float secVal)   // Definition
{
	return firVal - secVal;
}

// Multiplication

float mul(float, float);               // Prototype
float mul(float firVal, float secVal)  // Definition
{
	return firVal * secVal;
}

// Division

float div(float, float);                 // Prototype
float div(float firVal, float secVal)    // Definition
{
	return firVal / secVal;
}

// Modulus

int mod(int, int);                        // Prototype
int mod(int modFirVal, int modSecVal)     // Definition
{
	return modFirVal % modSecVal;
}

// Test if prime

char pri(int);          // Prototype
char pri(int testVal)   // Definition
{
	int maxVal;
	int loopVal;
	
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
						for (int loopVal = 2; loopVal < maxVal; loopVal++)          
						{                                                            
						if (testVal % ((2 * loopVal) + 1) == 0)                      
							printf("\n\tNot prime");                                
						
						}
					}
					else 
					printf("\n\tPrime");
					}
	return 0;
}

// Factorial

int fac(int);                // Prototype
int fac(int modFirVal)       // Definition
{
	int facFirVal = 0;
	int startVal = 1;
	int facResult = 0;
	
	if (modFirVal < 0)
		printf("\n\tSorry, factorials can only be found for positive integers!");
		
	else
	{
		for(startVal = 1; startVal <= facFirVal; startVal++)
		{
			facResult *= startVal;
		}
		
	}
	return facResult;
}

// Exponentiate

float expo(float, float);                 // Prototype
float expo(float firVal, float secVal)    // Definition
{
	
	return powf(firVal, secVal);
}

// Fibonacci sequence

int fib(int);            // Prototype
int fib(int firVal)      // Definition
{}



int main()
{


	//Opening and menu
	
	printf("\n\t\tStone Instruments Calculator App, V2");
	printf("\n\t\t\t\t\tSI-82");
	printf("\n\t\tWelcome! Please select an operation.\n\n");
	printf("Menu:");
	printf("\n[1]\tAddition");
	printf("\n[2]\tSubtraction");
	printf("\n[3]\tMultiplication");
	printf("\n[4]\tDivision");
	printf("\n[5]\tModulus (integers only)");
	printf("\n[6]\tTest if prime (integers only)");
	printf("\n[7]\tFactorial (integers only)");
	printf("\n[8]\tExponentiate");
	printf("\n[9]\tFibonacci sequence");
	printf("\n[0]\tExit\n\t");
	
	
	// Defining user operation
	
	int operation = 0;
	scanf("\n\n\t%d", &operation);
	
	// Result variables
	
	float fResult = 0;
	int iResult = 0;
	char cResult = 0;
	
	// Defining case 1-4 and 8-9 variables
	
	float firVal = 0;
	float secVal = 0;


	// Defining case 5 variables
	
	int modFirVal = 0;
	int modSecVal = 0;
	
	
	// Defining case 6 variables
	
	int testVal = 0;
	int maxVal = 0;
	int loopVal = 0;
	
	// Defining case 7 variables
	
	int facFirVal = 0;
	
		// Switch statement. Cases 1-0: Add, Subtract, Multiply, Divide, Modulus, Prime test, Factorial, Power, , Exit
	
		switch (operation)
		{
		
			case 1:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				fResult = add(firVal, secVal);
				printf("\n\t%f + %f = %f", firVal, secVal, fResult);
				break;
		
			case 2:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				fResult = sub(firVal, secVal);
				printf("\n\t%f - %f = %f", firVal, secVal, fResult);
				break;
		
			case 3:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				fResult = mul(firVal, secVal);
				printf("\n\t%f * %f = %f", firVal, secVal, fResult);
				break;
		
			case 4:
				printf("\n\tEnter the first number\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%f", &secVal);
				fResult = div(firVal, secVal);
				printf("\n\t%f / %f = %f", firVal, secVal, fResult);
				break;
		
			case 5:
				printf("\n\tEnter the first number\n");
				scanf("\t%d", &modFirVal);
				printf("\n\tEnter the second number\n");
				scanf("\t%d", &modSecVal);
				iResult = mod(modFirVal, modSecVal);
				printf("\n\t%d", iResult);
				break;
			
			case 6:
				printf("\n\tEnter a number\n");
				scanf("\t%d", &testVal);
				cResult = pri(testVal);
				printf("\n\t", cResult);
				break;
				
			case 7:
				printf("\n\tEnter a number\n");
				scanf("\t%d", facFirVal);
				iResult = fac(facFirVal);
				printf("\n\t%d! = %d", facFirVal, iResult);  // Method/logic should be sound? Not sure why not working.
				break;
				
			case 8:
				printf("\n\tEnter the number that will be raised to a power\n");
				scanf("\t%f", &firVal);
				printf("\n\tEnter the power it will be raised to\n");
				scanf("\t%f", &secVal);
				fResult = expo(firVal, secVal);
				printf("\n\t%f ^ %f = %f", firVal, secVal, fResult);
				break;
				
			case 9:
				printf("\n\tEnter the number of values you want to see (must be 20 or less)\n");
				scanf("\t%d", &firVal);
				iResult = fib(firVal);
				printf("\n\t%d", iResult); // Couldn't fix in time :(
				break;
			
			case 0:
				printf("\n\t\tGood bye!");
				return 0;

int pause();

}



	return 0;
}
