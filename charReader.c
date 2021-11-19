#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "countOccurence.h"

int countOccurrences(FILE *f, const char *word);


int main()
{
    FILE *f;

    char character[1];

    int cCount;

    printf("Enter character to search in file: ");
    scanf("%s", character);
    //prompts user to enter character to search

    f = fopen("Spam.txt", "r");
    //opens file

    if (f == NULL)
    {
        printf("Unable to open file.\n");

        exit(EXIT_FAILURE);
    }
    //exits if file can not be opened


    cCount = countOccurrences(f, character);
    //calls count occurence function to check for occurences of character

    printf("'%s' is found %d times in file.", character, cCount);


    // Close file
    fclose(f);

    return 0;
}