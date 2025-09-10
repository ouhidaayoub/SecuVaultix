#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#include "interfaceMenuInput.h"
#include "tricks/tricks.h"


#define USERNAME_SIZE 20;

char *usernaming(char *string, int stringSize, int firstInput);

char *input_requirement_of( char *forwhat ){

    if(strcmp(forwhat, "interfaceMenuInput") == 0){
        return *interfaceMenuInput();
    }

    /*const int usernameSize = 20;
    char *username = malloc(usernameSize);

    if(strcmp(forwhat, "username") == 0){
        usernamingRulesDisplay();
        int firstInput = 1;
        username = usernaming(username, usernameSize, firstInput);
        while(inputFeedback(username, &firstInput) == 1){
            username = usernaming(username, usernameSize, firstInput);
        }
    }
    if(pressKeyToDoSomething('\r', "Enter", "EXIT") == 1){
        return username;
    }
}

char *usernaming(char *string, int stringSize, int firstInput){

    int stringIndex = 0;
    char pressedCharacter;

    if(firstInput == 0){
        printf("username Entering will start... NOW!\n");
        printf("Enter: ");
    }else if(firstInput == 1){
        printf("username Entering will start again... NOW!\n");
        printf("Enter: ");
    }

    bool emptyInput = 0;
    char whyBeep;

    while((stringIndex != (stringSize+1)) && (stringIndex >= 0)){

        pressedCharacter = _getch();
    
        if (pressedCharacter == '\r'){
            if(stringIndex == 0){
                emptyInput = 1;
                return "emptyInput";
            }
        }else if( (pressedCharacter == '\b') ){
            if (stringIndex > 0){
                stringIndex--;
                printf("\b \b");
                continue;
            }else if(stringIndex == 0){
                Beep(200, 500);
                continue;
            }
        }else if( ((pressedCharacter < 'a') || (pressedCharacter > 'z')) && ((pressedCharacter < '0') || (pressedCharacter > '9')) && (pressedCharacter != '.') && (pressedCharacter != '-') && (pressedCharacter != '_') ){
            Beep(200, 500);
            whyBeep = _getch();
            if(whyBeep == 'W'){
                return "whyBeep!";
            }
            continue;
        }
            
        if(stringIndex == stringSize){
            Beep(200, 500);
            continue;
        }else if( !((pressedCharacter == '\b') && (stringIndex < 0)) ){
            printf("%c", pressedCharacter);
            string[stringIndex] = pressedCharacter;
            stringIndex++;
        }
    }

    string[stringIndex] = '\0';
    return string;*/
}