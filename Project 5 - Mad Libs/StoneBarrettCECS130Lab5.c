// Program: Random Short Story Generator
// Description: This program will ask the user for peronal information and
// use it to create a story.
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 2/15/19

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
	// Variables
	char name[20], age[20], college[20]; 
	int rOutfit, rColor, rCourse;
	
	// Randomizer options
	const char outfit[5][20] = {"sweatshirt","sweater","t-shirt","coat","hoodie"};
	const char color[5][20] = {"blue","red","purple","yellow","green"};
	const char course[5][20] = {"chemistry","engineering","calculus","film","programming"};
	
	// Randomized variables
	srand(time(NULL));
	rOutfit = (rand()%5);
	rColor = (rand()%5);
	rCourse = (rand()%5);
	
	// User interaction
	printf("\n\tPlease share some information (one word answers only!)");
	printf("\n\tWhat is your name?\n\t");
	scanf("%s", &name);
	printf("\n\tHow old are you?\n\t");
	scanf("%s", &age);
	printf("\n\tWhat college do you attend?\n\t");
	scanf("%s", &college);
	
	// Story
	
	printf("\n\n\t%s is a %s year old student attending %s.", name, age, college);
	printf("\nMonday mornings can be rough for %s, but today was just fine.", name);
	printf("\n%s got out of bed and put on their %s.", name, outfit[rOutfit]);
	printf("\n%s was excited to wear this, because although they'd had some before, this one was %s, which is their favorite.", name, color[rColor]);
	printf("\nAfter getting dressed and feeling fly, %s strutted on over to their %s class and took a test.", name, course[rCourse]);
	printf("\n\tThe end.");
	
	return 0;
	
}
