//Here is the pumpdown prosejure
void pumpDown(){
  if (!eStopPressed){
    relayControl(pumpCutin, true);        //open vaccume for pump
    relayControl(vacuumPump, true);   //Start pump
    if (atVacc){ //if we are at vaccume
      relayControl(vacuumPump, false); //stop pump
      relayControl(pumpCutin, false); //close pump line
    }
    if ((atVacc) && (2 < argonLoops)){ //if we are at vaccume and ran the loop twice
      startWater();
      startWelder();
    }else if (2 > argonLoops){ //if we have less then two loops
      inputArgon(argonInputTime); //put some argon in
      argonLoops = argonLoops + 1; //add one to the loop count
      pumpDown(); //rePumpthisBoy
    }
  }else{
    //put estop message here
  }
}
