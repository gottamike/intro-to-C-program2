#ifndef STRUCTURE_H
#define STRUCTURE_H

// struct creation of pointers
typedef struct CSCI_Classes
{
        char *classID;
	char *classTitle;
	char *daysofWeek;
	char *classTime;
	char *seatsAvailable;
	char *professorName;
} CSCI;

// including my function calls
void byLastName(char professor[], CSCI theClass[], int size);
void byClassDay(char byClassDay[], CSCI theClass[], int size);
void byClassNumber(char classNumber[], CSCI theClass[], int size);
void fillClasses(CSCI theClass[], char *classCSV[], int size);

#endif
