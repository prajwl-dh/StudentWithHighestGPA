//
//  header.h
//  StudentWithHighestGPA
//
//  Created by Prajwal Dhungana on 12/5/20.
//

#ifndef header_h
#define header_h

//declaring necesary libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defining a macro
#define NAME_LENGTH 50

//creating a struct
struct student
{
    int ID;
    char firstName[NAME_LENGTH+1];
    char secondName[NAME_LENGTH+1];
    float GPA;
};


#endif /* header_h */
