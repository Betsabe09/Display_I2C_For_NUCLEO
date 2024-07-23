#include "mbed.h"
#include "display.h"

// Configura los pines I2C y la dirección del LCD

int main() {
    // Inicializar el LCD
    displayInit( DISPLAY_CONNECTION_I2C_PCF8574_IO_EXPANDER );
    displayCharPositionWrite( 0, 1 );
    displayStringWrite( "Hola, Mundillo!!" );

    while (true) {
        thread_sleep_for(1000);
    }
}