#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool pressedKey(char key){
    char pressedKey = _getch();
    return ( pressedKey == key );
}