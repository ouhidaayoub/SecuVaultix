#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

#include "input/usernamingRulesDisplay.h"

void emptyInputFeedback(int *firstInput);

int inputFeedback(char *string, int *firstInput){

    if(strcmp(string, "emptyInput") == 0){
        emptyInputFeedback(&firstInput);
    }else{

        bool isMatchRules = 0;

        bool hasLetter = 0;
        bool isLower;
        bool hasSpecialCharacter = 0;
        bool lengthAsRequired = 0;

        for (int i = 0; string[i]!='\0'; i++){
            if (isalpha(string[i])){
                hasLetter = 1;
                if(islower(string[i])){
                    isLower = 1;
                }else if(isupper(string[i])){
                    isLower = 0;
                    break;
                }
                continue;
            }

            /*if(isSpecialCharacter(string[i])){
                hasSpecialCharacter = 1;
                break;
            }*/
        }

        if( !( (strlen(string) < 3) || (strlen(string) > 20) ) ){
            lengthAsRequired = 1;
        }

        if ( (hasLetter == 1) && (isLower == 1) && (hasSpecialCharacter == 0) && (lengthAsRequired == 1) ){
            isMatchRules = 1;
        }

        if(isMatchRules == 1){
            printf("\n\n\n\033[0;33mFeedback:\033[0m Your username \"%s\" has been accepted!\n", string);
            *firstInput = 0;
            return *firstInput;
        }else{
            printf("\n\n\n\033[0;33mFeedback:\033[0m The username you entered doesn't match the following rules:\n");

            if( (hasLetter == 0) ){
                printf("      -The username doesn't contain any letter from the alphabet at all...!\n");
            }
            if( (isLower == 0) && (hasLetter == 1)){
                printf("      -The username must contain only letters from the lower case range (a-z)...!\n");
            }
            if( hasSpecialCharacter == 1 ){
                printf("      -Any special character on the username is not allowed to use except '.' or '-' or '_' \n");
            }
            if( lengthAsRequired == 0 ){
                printf("      -The username length doesn't respect our limits range [3 - 20]\n");
            }

            printf("\n\nWould you read the rules again or re-enter the username?\n");
            printf("    [1] Display the rules again\n");
            printf("    [2] Re-enter the username again\n");

            char againChoice;
            
            bool firstChoose = 1;

            do{
                if (firstChoose == 1){
                    printf("\nWhould you wanna choose [1] or [2]? ");
                    againChoice = _getch();
                    if(againChoice == '1' || againChoice == '2'){
                        printf("%c", againChoice);
                    }else{
                        Beep(200, 500);
                        firstChoose = 0;
                        continue;
                    }
                }else{
                    printf("\nYou must enter either number [1] or [2] as choice please! ");
                    againChoice = _getch();
                    if(againChoice == '1' || againChoice == '2'){
                        printf("%c", againChoice);
                    }else{
                        Beep(200, 500);
                        continue;
                    }
                }
            }while ( (againChoice != '1') && (againChoice != '2') );

            if (againChoice == '1'){
                printf("\n\n");
                usernamingRulesDisplay();
                *firstInput = 1;
                return *firstInput;
            }else if(againChoice == '2'){
                printf("\n\n");
                *firstInput = 1;
                return *firstInput;
            }
        }

    }
}

void emptyInputFeedback(int *firstInput){
        printf("\n\n\n\033[0;33mFeedback:\033[0m You didn't enter anything !!\n");
        (*firstInput) = 1;
        return *firstInput;
}