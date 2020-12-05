//
//  main.c
//  StudentWithHighestGPA
//
//  Created by Prajwal Dhungana on 12/5/20.
//

//declaring necesary libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//including header file
#include "header.h"

//begin main
int main()
{
    int numberOfStudents;
    int maxGPA = 0;
    printf("\n Please enter how many students you want to add to the database: ");
    scanf(" %d", &numberOfStudents);
    
    //creating secondary struct with array
    struct student st[numberOfStudents];

    printf("\n-------------------------------------------------------\n");
    printf("Student database: \n");
    
    //for loop to get user input
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\n Student %d\n", i+1);
        printf("Student Id(number) : ");
        scanf(" %d", &st[i].ID);

        printf("First Name : ");
        scanf(" %s", st[i].firstName);

        printf("Second Name : ");
        scanf(" %s", st[i].secondName);

        printf("GPA: ");
        scanf(" %f", &st[i].GPA);
    }
    printf("-------------------------------------------------------\n\n");

    printf("\n*******************************************************\n");
    printf("Highest GPA: \n");

    //for loop to find highest GPA
    for (int j = 0; j < numberOfStudents; j++)
    {
        if (st[j].GPA > st[maxGPA].GPA)
        {
            maxGPA = j;
        }
        
    }
    
    //printing student detail with highest GPA
    printf("Student ID: %d\n", st[maxGPA].ID);
    printf("Name: %s %s\n", st[maxGPA].firstName, st[maxGPA].secondName);
    printf("GPA : %.1f", st[maxGPA].GPA);
    printf("\n*******************************************************\n");

    return 0;
}
//end main
