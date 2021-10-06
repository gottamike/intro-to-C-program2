#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"structure.h"

// this function returns a class by its class number such as CSCI 112 or 232
void byClassNumber(char classNumber[], CSCI theClass[], int size){
	// simple for loop that goes through my struct array
        for (int k = 0; k < size; k++){
		// string compare is really what makes this work so well
                if (strcmp(theClass[k].classID, classNumber) == 0){
			// if the strings are equal, print out all this information for that array
			printf("%-40s", theClass[k].classTitle);
                        printf("%-15s", theClass[k].classID);
                        printf("%-35s", theClass[k].professorName);
                        printf("%-10s ", theClass[k].seatsAvailable);
                        printf("%-10s", theClass[k].daysofWeek);
                        printf("%-10s", theClass[k].classTime);
                        printf("\n");
                }
        }

}
