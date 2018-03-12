void setUpPins(){
  pinMode(waterTempPin, INPUT);
  pinMode(crusableTempPin, INPUT);
  pinMode(electrodeTempPin, INPUT);
  pinMode(eStop, INPUT);
  pinMode(flowPin, INPUT);

  pinMode(vacuumPump  , OUTPUT);
  pinMode(coolentPump , OUTPUT);
  pinMode(argonValve  , OUTPUT);
  pinMode(welderPower , OUTPUT);
  pinMode(pumpCutin   , OUTPUT);
  pinMode(ventChamber , OUTPUT);
}

void resetDevices(){  // Disable all of the devices
  digitalWrite(vacuumPump, LOW);
  digitalWrite(coolentPump, LOW);
  digitalWrite(argonValve, LOW);
  digitalWrite(welderPower, LOW);
  digitalWrite(pumpCutin, LOW);
  digitalWrite(ventChamber, LOW);

  argonLoops = 0;

}

void debugOutputs(){
  if (debug){
    //debug with some cool patters
  }else{
    //something to say debug is disabled
  }
}
