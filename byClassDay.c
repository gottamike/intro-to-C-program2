#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"structure.h"

//function that organizes by class day, either MTW or TR
void byClassDay(char byClassDay[], CSCI theClass[], int size){
	// once again a simple for loop through the array of structs
        for (int k = 0; k < size; k++){
		// string compare once again is terrific here
                if (strcmp(theClass[k].daysofWeek, byClassDay) == 0){
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
