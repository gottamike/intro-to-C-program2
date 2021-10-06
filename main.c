#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"structure.h"

// all my function calls
void byLastName(char professor[], CSCI theClass[], int size);
void byClassDay(char byClassDay[], CSCI theClass[], int size);
void byClassNumber(char classNumber[], CSCI theClass[], int size);
void fillClasses(CSCI theClass[], char *classCSV[], int size);


int main(void){

	// creating a class with 100 spaces
	char *classCSV[100];
	
	//opening a file
	FILE *in_file;
	in_file = fopen("/public/pgm2/classes.csv", "r");

	//if I cant find that file throw an error
	if (in_file == NULL){
		printf("Error could not open file");
		return 0;
	}
	
	int i = 0;
	// allocating memory for the CSV file
	do {
		classCSV[i] = malloc(sizeof(char) * 200);
	} while (fgets(classCSV[i++], 200, in_file) != NULL);
	i--;

	// making an array of structs of size how many classes there are
	CSCI theClass[i];
	
	// fillings the class struct array with the organized CSV information
	fillClasses(theClass, classCSV, i);
	
	int userInput;
	// do while loop that acts as the brains of this program
	do {
		printf("1 - print class given number\n");
                printf("2 - print all classes for a given day combo\n");
        	printf("3 - print all classes for a given professor\n");
		printf("0 - quit\n");

		scanf("%d", &userInput);

		if (userInput == 1){
			// creating an array the user can store their input
			char classNumber[10];
			printf("Enter class number : ");
			scanf(" %[^\n]s", classNumber);
			//sending that input to my function
			byClassNumber(classNumber, theClass, i);	
		} 

		if (userInput == 2){
			// creating an array that the user can store their input
			char classDay[5];
			printf("What days would you like? (MWF or TR) : ");
			scanf("%s", classDay);
			//sending that input to my function
			byClassDay(classDay, theClass, i);
		}

		if (userInput == 3){
			// creating an array the user can store their input
			char professor[15];
			printf("Enter the professors last name: ");
			scanf("%s", professor);
			// sending that input to my function
			byLastName(professor, theClass, i);
		}
	}
	while (userInput != 0);
	


	return 0;


}
