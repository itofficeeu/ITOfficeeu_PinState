#include <ITOfficeeu_PinState.h>

/* Define wich pin will be used to power the mosfet feeding the board 
 * and sensors with ground. The microcontroller itself is of course excluded 
 * from this feature. */
#define POWER_PIN 13

ITO_PinState boardpower;

void setup()
{
  Serial.begin(115200);
  Serial.println("Starting the program.");

  boardpower.begin(POWER_PIN);  /* Set the initial configuration for the power pin */

  boardpower.on();
  delay(300);        /* Let the sensors get stable */
}

// Toggle the power on and off to show the effect.
void loop()
{
  boardpower.off();
  delay(1000);

  boardpower.on();
  delay(1000);
}
