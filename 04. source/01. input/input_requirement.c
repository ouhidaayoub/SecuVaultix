#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#include "input/interfaceMenuInput.h"
#include "beepReason.h"

#include "tricks/tricks.h"

char *input_requirement( char *of_what, char *extraStringArg ){

    if(strcmp(of_what, "interfaceMenuInput") == 0){
        return interfaceMenuInput();
    }else if(strcmp(of_what, "W") == 0){
        beepReason( extraStringArg );
    }

}