/* 
 * File:   picproject.c
 * Author: oscar
 * Created on March 30, 2020, 4:37 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include "config.h"
void setup(){
    TRISB = 0;
    PORTB = 0; 
}
void main(int argc, char** argv) {
    setup();
    while(1){
        if(RA0){
            PORTB=7;
            //RB0=1;
        } 
        else{
           PORTB=0;
        }
    }
}
