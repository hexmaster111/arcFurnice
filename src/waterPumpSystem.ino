//water pump management

void startWater(){ // must return true after water is checked and ok to run
                   // the checks must test that there is enought water flow
  if (!eStopPressed){
    relayControl(coolentPump, true);
  }else{
    relayControl(coolentPump, false);
  }
}

void checkFlow(){ //must set the waterFlowing bool to true
  if(digitalRead(coolentPump)){
    waterFlowing = true;
  }else{
    waterFlowing = false;
  }
}
