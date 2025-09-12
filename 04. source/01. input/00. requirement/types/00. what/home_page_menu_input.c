#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#include "defines/defines.h"
#include "00. display\display.h"
#include "tricks\tricks.h"

char *home_page_menu_input(){

    char *string = malloc(2);
    char pressedCharacter;
    bool doesntMatch;

    display( BW, 0, NULL );
    
    do{
        pressedCharacter = _getch();
        if( (pressedCharacter == '1') || (pressedCharacter == '2') || (pressedCharacter == '3') ){
            printf("%c", pressedCharacter);
            if(pressedKey('\r')){
                break;
            }
            doesntMatch == 0;
        }else if( pressedCharacter == 'H'){
            display(BR, 0, "either [1] or [2] or [3]");
            doesntMatch == 1;
        }else{
            Beep(200, 500);
            doesntMatch == 1;
        }
    }while(doesntMatch == 1);

    string[0] = pressedCharacter;
    string[1] = '\0';

    return string;

}