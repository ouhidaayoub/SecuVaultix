#include <stdio.h>
#include <conio.h>

#include "display.h"
#include "interface\interface.h"
#include "input_requirement.h"

int main (){

    display("interfaceWelcomeMessage", 0, NULL);
    display("interfaceMenu()", 0, NULL);

    if(input_requirement( "interfaceMenuInput", NULL ) == "1"){
        printf("\n\nWelcome to login page");
    }

    _getch();
    //*input();

    return 0;
}