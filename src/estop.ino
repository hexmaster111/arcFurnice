//Check of the EStop is pressed, if it is set the eStop value to true.

void checkSafty(){
  if(!digitalRead(eStop)){ // If estop is eStopPressed
    eStopPressed = true;
  }else{
    eStopPressed = false;
  }
  checkTemp();
}


void checkTemp(){
  //stuff to check temp and shut the wellder off if we go over temp on the Crucable
  // or the electrode
  
}
