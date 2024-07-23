#include "mbed.h"
#include "display.h"

// Configura los pines I2C y la dirección del LCD

int main() {
    // Inicializar el LCD
    displayInit();
    displayCharPositionWrite( 3, 1 );
    displayStringWrite( "ABCDEFGHI" );

    while (true) {
        thread_sleep_for(1000);
    }
}