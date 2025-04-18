#include <stdio.h>
#include <string.h>
#include "admin.h"
int admin()
{
    FILE *adminfile;
    char admin_pw[22];
    char check[22];

    printf("Enter admin password:");
    fgets(admin_pw, 22, stdin);
    admin_pw[strcspn(admin_pw, "\n")] = 0;

    printf("You have entered %s\n", admin_pw);


    adminfile=fopen("admins1.txt", "r");

      
        if(adminfile==NULL)
           {
            printf("error opening file\n");
            return 1;
           }
        
        else
          
     fgets(check, 22, adminfile);

           if(strcmp(check,admin_pw) == 0) 
         {
          printf("Welcome Tony Ravioli. Please select from the following tasks: \n");
          return 0;
         }
            

           else   
             printf("Fuck off!!!");

        fclose(adminfile);
        return 0;
            
    }