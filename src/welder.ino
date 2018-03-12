//welder control and safty
void startWelder(){
  if ((!eStopPressed) && (waterFlowing)){
    relayControl(welderPower, true);
  }else{
    relayControl(welderPower, false);
  }

}
