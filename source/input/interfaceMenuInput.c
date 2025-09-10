#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#include "display.h"
#include "beepReason.h"

#include "input/pressedKey.h"

char *interfaceMenuInput(){

    char string[1];
    char pressedCharacter;
    bool doesntMatch;

    display( "beepReasonMessage", 0, NULL );
    
    do{
        pressedCharacter = _getch();
        if( (pressedCharacter == '1') || (pressedCharacter == '2') || (pressedCharacter == '3') ){
            printf("%c", pressedCharacter);
            if(pressedKey('\r')){
                break;
            }
            doesntMatch == 0;
        }else if( pressedCharacter == 'H'){
            beepReason( "either [1] or [2] or [3]" );
            doesntMatch == 1;
        }else{
            Beep(200, 500);
            doesntMatch == 1;
        }
    }while(doesntMatch == 1);

    char *pressedKeyString = malloc(1);
    pressedKeyString[0] = pressedCharacter;
    pressedKeyString[1] = '\0';

    return pressedKeyString;

}