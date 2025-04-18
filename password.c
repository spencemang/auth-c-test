#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char username[22];
    char check[22];
    FILE *file;
   

    printf("Enter username: ");
    fgets(username, 22, stdin);

    file = fopen("usernames.txt", "r");

    if (file == NULL)
    {
    perror("error opening file");
    return 1;
    } 


    fgets(check, 22, file);

    if (strcmp(check,username) == 0)
      printf("Welcome, %s!\n", username);
    else
       printf("No match found. Fuck off!!!\n");

    fclose(file);

    return 0;

}