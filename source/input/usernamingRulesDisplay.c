#include <stdio.h>

void usernamingRulesDisplay(){

    printf("========== username Required Rules ==========\n");
    printf("|                                           |\n");
    printf("|  \033[0;33m01-\033[0m The username's must conatin letters  |\n");
    printf("|      from (a-z) in lower case form.       |\n");
    printf("|                                           |\n");
    printf("|  \033[0;33m02-\033[0m Numbers are allowed to use.          |\n");
    printf("|                                           |\n");
    printf("|  \033[0;33m03-\033[0m Spaces and special charachter are    |\n");
    printf("|      not allowed.                         |\n");
    printf("|                                           |\n");
    printf("|  \033[0;33m04-\033[0m Only ('.' and '-' and '_') are       |\n");
    printf("|      allowed as special characters.       |\n");
    printf("|                                           |\n");
    printf("|  \033[0;33m05-\033[0m The username length must be at least |\n");
    printf("|      03 characters and musn't exceed 20   |\n");
    printf("|      characters.                          |\n");
    printf("|                                           |\n");
    printf("=============================================\n");
    printf("| \033[0;31mWarning!\033[0m Be careful to read the rules.    |\n");
    printf("=============================================\n\n");

}