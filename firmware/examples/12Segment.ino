// This #include statement was automatically added by the Spark IDE.
#include "Spark_Adafruit_LEDBackpack.h"
#include "Adafruit_GFX/Adafruit_GFX.h"
#include "application.h"

/***************************************************
  This is a library for our I2C LED Backpacks

  Designed specifically to work with the Adafruit LED Matrix backpacks
  ----> http://www.adafruit.com/products/872
  ----> http://www.adafruit.com/products/871
  ----> http://www.adafruit.com/products/870

  These displays use I2C to communicate, 2 pins are required to
  interface. There are multiple selectable I2C addresses. For backpacks
  with 2 Address Select pins: 0x70, 0x71, 0x72 or 0x73. For backpacks
  with 3 Address Select pins: 0x70 thru 0x77

  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.
  BSD license, all text above must be included in any redistribution
 ****************************************************/
//#include "wire.h"
//#include "a.h"
//#include "Adafruit_GFX.h"

Adafruit_AlphaNum4 alpha4 = Adafruit_AlphaNum4();

String message = "THIS IS A LONG MESSAGE";
int displayposition = 0;

void setup() {
  alpha4.begin(0x70);
  alpha4.setBrightness(2);
}


void loop() {

    //This is test code for method 2 - updates the display by one increment every time called
    displayposition = alpha4.ledPrint(message, 4, 1, 2, displayposition, true, false);
    delay(500);
    //displayposition = alpha4.ledPrint(message, 4, 1, 1, 500, true, false);
    //delay(5000);
    //displayposition = alpha4.ledPrint(" WE ARE DONEFOR NOW", 4, 2, 1, 500, true, false);
    //delay(5000);
}
