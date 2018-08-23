/*
  Written By Bobby @ SparkFun Electronics
  Date:
  Description:
  
  Development environment specifics:
    IDE: Arduino IDE V 1.8.5 with the Teensyduino Add-on installed V Teensy Loader V1.41
*/
const int ledPin = 13;

//an array to define each of the eight touch sense pins
int pinTouch[] = {0, 1, 15, 16, 17, 25, 32, 33};
int button1State;
/*buttonXstate
  - LOW or 0 means pressed
  - HIGH or 1 means not pressed
*/
boolean prev_button2State = false;
boolean current_button2State = false;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Begin Hand Hopping!!!");
}

void loop() {
  //check value when hand hopping on capacitive touch surface and adjust if() statement as necessary
  //if (touchRead(pinTouch[2]) > 3500) {
  if (touchRead(pinTouch[2]) > 4500) {//when connected to computer
    Serial.print("Teensy Capacitive touchRead() = ");
    Serial.println(touchRead(pinTouch[2]));
    digitalWrite(ledPin, HIGH);   // set the LED on
    delay(50);                  // wait for a second
  }
  else {
    digitalWrite(ledPin, LOW);    // set the LED off
    delay(50);                  // wait for a second
  }
}
