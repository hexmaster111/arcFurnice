//Main Sceatch
#include <Arduino.h>
#include <LiquidCrystal.h>

const int waterTempPin = A0;
const int crusableTempPin = A1;
const int electrodeTempPin = A2;
const int eStop        =  2;
const int flowPin      =  9;

const int vacuumPump   =  3;
const int coolentPump  =  4;
const int pumpCutin    =  5;
const int argonValve   =  7;
const int welderPower  =  8;
const int ventChamber  = 12;


int safeTemp = 400; // change this later
int argonInputTime = 1000; //change this latter
int argonLoops; //the amount of times we put the argon in

int crusableTemp;
int electrodeTemp;

bool eStopPressed;
bool debug = false;
bool atVacc = false;
bool waterFlowing = false; //Used for checking if the water is flowing


void setup(){
  setUpPins();
  resetDevices();
}


void loop(){
  if ((debug) && (!eStopPressed)){
    debugOutputs;
  }
  checkFlow();
  checkSafty();
  updateDisplay();
}
