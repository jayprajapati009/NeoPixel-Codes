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
  delay(20);
  Red2Flash();
  delay(20);
  Blue2Flash();
}

void Red2(){
  for(int i=0; i<(NUMPIXELS/2); i++){
    pixels.setPixelColor(i, pixels.Color(150, 0, 0));
  }
  pixels.show();
}

void Blue2(){
  for(int i=12; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(0, 0, 150));
  }
  pixels.show();
}

void Blank(){
  for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  }
  pixels.show();
}

void Red2Flash(){
  for(int i=0; i<=3; i++){
    Red2();
    delay(20);
    Blank();
    delay(0);
  }
}

void Blue2Flash(){
  for(int i=0; i<=3; i++){
    Blue2();
    delay(20);
    Blank();
    delay(0);
  }
}
