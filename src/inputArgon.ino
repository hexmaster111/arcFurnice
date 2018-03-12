//Will put in argon for a spesfied amoute of time
//We dont need to handle flow control. That will
//be set with a flow meater on the bottle

void inputArgon(int t){
  int currentTime = millis();
  int targetTime = currentTime + t;
  if (millis() < targetTime){
    relayControl(argonValve, true);
  }else{
    relayControl(argonValve, false);
    //argonIn = argonIn + 1;
  }
}
