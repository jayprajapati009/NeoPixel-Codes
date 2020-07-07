//Including Library for Neo Pixel
#include <Adafruit_NeoPixel.h>

//Defining Digital Pin on Board
#define PIN 6
//Total Number Of Pixels
#define NUMPIXELS 24

//Calling the function to set the neopixel
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin(); //Initiating the pixels
}

void loop() {
  pixels.clear(); //Turning off all the leds
  for(int i=0; i<=150; i++){
    Allon(i);
    delay(10);
  }
  for(int i=149; i>=0; i--){
    Allon(i);
    delay(10);
  }
}

void Allon(uint8_t k){
  for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(0, k, 0));
  }
  pixels.show();
}
