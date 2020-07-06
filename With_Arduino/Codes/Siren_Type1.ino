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
  delay(50);
  Red1Flash();
  delay(50);
  Blue1Flash();
}

void Red1(){
  for(int i=0; i<(NUMPIXELS/2); i++){
    pixels.setPixelColor(i, pixels.Color(150, 0, 0));
  }
  pixels.show();
}

void Blue1(){
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

void Red1Flash(){
  for(int i=0; i<=3; i++){
    Red1();
    delay(75);
    Blank();
    delay(40);
  }
}

void Blue1Flash(){
  for(int i=0; i<=3; i++){
    Blue1();
    delay(75);
    Blank();
    delay(40);
  }
}
