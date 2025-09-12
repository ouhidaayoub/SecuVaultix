#include <stdio.h>
#include <conio.h>

#include "defines/defines.h"
#include "00. display/display.h"
#include "01. input\requirement.h"

//#include "interface\interface.h"
//#include "input_requirement.h"

int main (){

    display(WM, 0, NULL);
    display(HPM, 0, NULL);

    //_getch();

    if(input_requirement_of( HPM ) == "1"){
        printf("\n\nWelcome to login page");
    }else if(input_requirement_of( HPM ) == "2"){
        printf("\n\nWelcome to sign up page");
    }

    return 0;
}