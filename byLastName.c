#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"structure.h"

// function that organizes by the professors last name
void byLastName(char professor[], CSCI theClass[], int size){
	// for loop through the array of structs
        for (int k = 0; k < size; k++){
		// this is string compare but only compares 4 characters (hence the 4)
		// this works well because by the time you have typed 4 characters of a professors last name
		// chances are you already have that professor matched in strncmp
                if (strncmp(theClass[k].professorName, professor, 4) == 0 ){
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
