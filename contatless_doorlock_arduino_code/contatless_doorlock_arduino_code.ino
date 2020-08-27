
const int sensorPin = 2;     // connect sensor out to arduino pin D2
const int ledPin =  13;      // connect Relay to arduin PIN D13
const int timeIntervel = 3000; // lock open 3sec

int sensorState = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the sensor pin as an input:
  pinMode(sensorPin, INPUT);
}

void loop() {
  // read the state of the sensor value:
  sensorState = digitalRead(sensorPin);

  if (sensorState == HIGH) {
    // lock open
    digitalWrite(ledPin, HIGH);
    delay(timeIntervel);
  } else {
     // lock close after a small delay
    digitalWrite(ledPin, LOW);
  }
}
