#include <stdio.h>
#include <conio.h>

#include "tricks/tricks.h"

void welcome_message(){

    nline(2);

    printf("  ===============================================================\n");
    printf("  |          Welcome To The Best Password Manager Ever          |\n");
    printf("  |                                                             |\n");
    printf("  |                        \033[0;31mSecuVaultix\033[0m                          |\n");
    printf("  ===============================================================\n");

    nline(2);

}

void home_page_menu(){

    nline(2);

    printf("  ===============================================================\n");
    printf("  |    Choose [1] or [2] or [3] from below choices please...!   |\n");
    printf("  |                                                             |\n");
    printf("  |  \033[0;33m1 -\033[0m Sign In                                                |\n");
    printf("  |  \033[0;33m2 -\033[0m Sign Up                                                |\n");
    printf("  |  \033[0;33m3 -\033[0m Sign Out                                               |\n");
    printf("  |                                                             |\n");
    printf("  ===============================================================\n");

    nline(2);

}

void usernaming_rules(){

    nline(2);

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

    nline(2);

}

void beep_warning(){

    nline(2);

    printf("\nIf are hearing a Beep sound, that's mean you are not entering the correct choice \"You can press 'H' as it is in upper case format for help...!");

    nline(2);
    
}