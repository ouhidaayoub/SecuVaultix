#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

void nline(int linesNumber){

    for (int i=0; i<linesNumber; i++){
        printf("\n");
    }
    return;

}

bool pressedKey(char key){
    char character = _getch();
    return ( character == key );
}