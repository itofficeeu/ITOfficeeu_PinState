/*
 Author: Andreas C. Dyhrberg, www.itoffice.eu 
*/

 /* Just started to put code into the file - not finished at all */

#include "Arduino.h"
#include "ITOfficeeu_PinState.h"


void ITO_PinState::begin(uint8_t pinNumber /*=PIN*/)
{
  _pinNumber = pinNumber;
  pinMode(_pinNumber, OUTPUT);
}

void ITO_PinState::on()
{
  digitalWrite(_pinNumber, HIGH);
}

void ITO_PinState::off()
{
  digitalWrite(_pinNumber, LOW);
}

uint8_t ITO_PinState::status()
{
  return digitalRead(_pinNumber);
}

