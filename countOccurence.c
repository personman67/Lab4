#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFFER_SIZE 1000

int countOccurrences(FILE *f, const char *character)
{
    char str[BUFFER_SIZE];
    char *pos;

    int index, count;
    
    count = 0;
    //defines function variables

    while ((fgets(str, BUFFER_SIZE, f)) != NULL)
    {
        index = 0;

        while ((pos = strstr(str + index, character)) != NULL)
        {

            index = (pos - str) + 1;

            count++;
        }
    }
    //reads through file and indexes each occurence of selected character
    return count;
    //returns count of characters in file
}