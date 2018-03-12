// Relay control, takes in pin Number, and opperation in TRUE of FALSE
// Will set relay output accordingly

void relayControl(int pin,bool opp){
  if (!digitalRead(pin) && (opp)){ // if pin low and opp high
      digitalWrite(pin, HIGH); // set the pin high
    }else if (digitalRead(pin) && (!opp)){ // if pin high and opp LOW
      digitalWrite(pin, LOW);     // set pin LOW
    // }else if (digitalRead(pin) && (opp)){ // if pin high and opp high
    // }else if (!digitalRead(pin) && (!opp)){ // if pin low and opp low
  }
}
