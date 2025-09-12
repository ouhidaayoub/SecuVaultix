#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#include "01. input\types\00. what\home_page_menu_input.h"

char *input_requirement_of( char *forwhat ){

    if(strcmp(forwhat, "home_page_menu") == 0){
        return *home_page_menu_input();
    } 

}