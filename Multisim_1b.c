#include <pic.h>


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
