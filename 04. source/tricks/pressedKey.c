#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool pressedKey(char key){
    char character = _getch();
    return ( character == key );
}