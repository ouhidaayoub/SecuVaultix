#include <stdio.h>
#include <string.h>

#include "interface/interface.h"
#include "beepReasonMessage.h"

void display( char *somthing, int extraIntegerArg, char *extraStringArg ){


    if(strcmp(somthing, "interfaceWelcomeMessage") == 0){
        // interface.c
        interfaceWelcomeMessage();
    }else if(strcmp(somthing, "interfaceMenu()") == 0){
        // interface.c
        interfaceMenu();
    }else if(strcmp(somthing, "usernamingRules") == 0){
        // interface.c
        usernamingRules();
    }else if(strcmp(somthing, "beepReasonMessage") == 0){
        beepReasonMessage();
    }


}