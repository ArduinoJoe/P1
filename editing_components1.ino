int led_red = 7; // the red LED is connected to Pin 0 of the Arduino
int led_BLUE = 11; // the yellow LED is connected to Pin 1 of the Arduino
int led_green = 9; // the green LED is connected to Pin 2 of the Arduino

void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(led_red, OUTPUT);
  pinMode(led_BLUE, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  // turn the green LED on and the other LEDs off
  digitalWrite(led_red, HIGH); 
   delay(1000); 
  
  
  digitalWrite(led_green, HIGH);
   delay(1000);
  digitalWrite(led_green, LOW);
   delay(1000);
  digitalWrite(led_green, HIGH);
   delay(1000);
  digitalWrite(led_green, LOW);
   delay(1000);
  digitalWrite(led_green, HIGH);
   delay(1000);
  digitalWrite(led_green, LOW);

    delay(1000);
  digitalWrite(led_red, LOW);
   delay(1000);
  digitalWrite(led_BLUE, HIGH);
   delay(1000);
  digitalWrite(led_BLUE, LOW);
  delay(1000);    // wait 2 seconds
     
}