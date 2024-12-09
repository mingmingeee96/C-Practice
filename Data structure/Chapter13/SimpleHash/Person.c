#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PErson.h"

int GetSSN(Person *p)
{
    return p->ssn;
}

void ShowPerInfo(Person * p)
{
    printf("SSN: %d \n", p->ssn);
    printf("Name: %s \n", p->name);
    printf("Address: %s \n\n", p->addr);
}

Person * MakePersonData(int ssn, char * name, char * addr)
{
    Person * newP = (Person*)malloc(sizeof(Person));
    newP->ssn = ssn;
    strcpy(newP->name, name);
    strcpy(newP->addr, addr);
    return newP;
}