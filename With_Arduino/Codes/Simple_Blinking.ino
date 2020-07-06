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
  
  for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
  }
  pixels.show();  
  delay(500); 
  
  for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  }
  pixels.show();  
  delay(500);
}
