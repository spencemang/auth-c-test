#include <stdio.h>
#include <string.h>
#include "user.h"

int user()
{
    char username[22];
    char check[22];
    FILE *userfile;
    printf("Enter username: ");
    fgets(username, 22, stdin);
    username[strcspn(username, "\n")]=0;

    userfile = fopen("usernames.txt", "r");

    if (userfile == NULL)
        {
            perror("error opening file");
            return 1;
        } 


    fgets(check, 22, userfile);

    if (strcmp(check,username) == 0)
      printf("Welcome, %s!\n", username);
    else
       printf("No match found. Fuck off!!!\n");

    fclose(userfile);

    return 0;
}