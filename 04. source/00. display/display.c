#include <stdio.h>
#include <string.h>

#include "00. display\types\00. what\what.h"
#include "00. display\types\02. why\beep_reason.h"
#include "tricks\tricks.h"

void display( char *somthing, int extraIntegerArg, char *extraStringArg ){

    if(strcmp(somthing, "welcome_message") == 0){
        welcome_message();
    }else if(strcmp(somthing, "home_page_menu") == 0){
        home_page_menu();
    }else if(strcmp(somthing, "usernaming_rules") == 0){
        usernaming_rules();
    }else if(strcmp(somthing, "beep_warning") == 0){
        beep_warning();
    }else if(strcmp(somthing, "beep_reason") == 0){
        beep_reason(extraStringArg);
    }

}