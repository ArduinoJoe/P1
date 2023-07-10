 // the green LED is connected to Pin 2 of the Arduino
 int greenLED = 7; // تعيين رقم المنفذ الذي يتم توصيل المصباح الأخضر به
 int blueLED = 9; // تعيين رقم المنفذ الذي يتم توصيل المصباح الأصفر به
 int redLED =  11; // تعيين رقم المنفذ الذي يتم توصيل المصباح الأحمر به

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // عرض الأضواء الخضراء
  digitalWrite(greenLED, HIGH);
  delay(1000);



  // عرض الأضواء الصفراء التومض
  for (int i = 0; i < 3; i++) {
    digitalWrite(blueLED, HIGH);
    delay(500);
    digitalWrite(blueLED, LOW);
    delay(500);
  }

    // إيقاف عرض الأضواء الخضراء
  digitalWrite(greenLED, LOW);
  
  
  // عرض الأضواء الحمراء
  digitalWrite(redLED, HIGH);
  delay(1000);

  // إعادة الدورة
  digitalWrite(redLED, LOW);

  // تأخير قبل بدء الدورة التالية
  delay(1000);
}
