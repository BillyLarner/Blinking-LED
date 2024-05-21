int ledPin1 = 5; // sets the led to Pin 5


void setup() {
 pinMode (ledPin1, OUTPUT) ; // sets the pin to an output

}

void loop () {
    breath (ledPin1, 6) ; // calls the breath function
    delay (500) ;         // wait for half a second
}

void breath (int ledPin1, int delayMs) {
  for (int i = 0; i < 255; i++) { // while "i" is equal to 0 or less than 255 "i" will increase
    analogWrite (ledPin1, i) ;    // makes ledPin 1 use duty cycles
    delay(delayMs) ;              // sets the rate of change for the brightness
  }
  for (int i = 255; i >= 0; i--) { // while "i" is equal to 255 or more or equal to 0 "i" will decrease
    analogWrite (ledPin1, i) ;     // makes ledPin1 use duty cycles
    delay(delayMs) ;               // sets the rate of change for the brightness
  }
}