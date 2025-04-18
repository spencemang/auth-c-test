#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "admin.h"
#include "user.h"
        

int main(){
 
    char user_input[15];
    int input_value;

    
    printf("Welcome to the Authenticator. Please enter the number '1' for a user " 
        "account or '2' for an admin account \n");

    fgets(user_input,15,stdin);
    input_value = atoi(user_input);
    

    if (input_value == 2)
        admin();
    
    else if (input_value == 1)
        user();
    else
        printf("Bad selection. Please try again\n");
   
}

