#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include <ctype.h>

void load() {
    printf("Type the name file: ");
    
    char fileName[60];
     // Get and save the number the user types
    scanf("%s", fileName);
    
    FILE* fp;
    fp = fopen(fileName, "r");
    if (fp == NULL) {
      perror("File not found: ");
    }

    char buffer[150];
    while (fgets(buffer, 150, fp))
    {
        // Remove trailing newline
        buffer[strcspn(buffer, "\n")] = 0;
        printf("%s\n", buffer);
    }
    fclose(fp);
}

int main() {
    
    // TODO: implement menu and call subprograms for each operation

    printf("**********************************\n");
    printf("**          MENU:               **\n");
    printf("**          LOAD                **\n");   
    printf("**          CLEAR               **\n");   
    printf("**          QUIT                ** \n");   
    printf("**          LIST                **\n");   
    printf("**          FOUNDP              **\n");   
    printf("**          SEARCH              **\n");   
    printf("**          EDIT                **\n");   
    printf("**          CENTER              **\n");   
    printf("**          AGE                 **\n");   
    printf("**          SORT                **\n");   
    printf("**          STATEC              **\n");  
    printf("**          M81                 **\n");   
    printf("**          SAVE                **\n");  
    printf("**********************************\n");

    // Create an integer variable that will store the number we get from the user
    char menuOption[30];

    // Ask the user to type a number
    printf("Type the option: ");
    // Get and save the number the user types
    scanf("%s", menuOption);

    // Output the number the user typed
    printf("Your option is: %s\n\n", menuOption);

    if(strcmp(menuOption,"LOAD") == 0)
    {  
        load();
    } else {
        printf("## Error\n");
    }
}

