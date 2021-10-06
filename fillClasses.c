#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"structure.h"

// I use a lot of strtok for this program, seems to work pretty darn good
void fillClasses(CSCI theClass[], char *classCSV[], int size){
        for (int j = 0; j < size; j++){
                char *token = strtok(classCSV[j], ",");
                theClass[j].classID = token;

                token = strtok(NULL, ",");
                theClass[j].classTitle = token;

                // this line has a class number in it like 33930, so I am skipping this line
                token = strtok(NULL, ",");

                token = strtok(NULL, ",");
                theClass[j].seatsAvailable = token;

                // these lines have useless seats available info, so I am skipping these lines
                token = strtok(NULL, ",");
                token = strtok(NULL, ",");

                token = strtok(NULL, ",");
                theClass[j].professorName = token;

                // dont split at the comma because there is no comma, instead split on a space between the days of week and class time
                token = strtok(NULL, " ");
                theClass[j].daysofWeek = token;

                // whatever is left after the space must be the class time
                token = strtok(NULL, "");
                theClass[j].classTime = token;
        }

}
