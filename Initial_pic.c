/* 
 * File:   picproject.c
 * Author: oscar
 * Created on March 2, 2020, 4:37 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include "config.h"
void setup(){
    TRISB = 0;
    PORTB = 2; 
}
int main(int argc, char** argv) {
    setup();
    while(1){
        if(RA0){
            PORTB=4;
            RB0=1;
        } 
    }
    return (EXIT_SUCCESS);
}