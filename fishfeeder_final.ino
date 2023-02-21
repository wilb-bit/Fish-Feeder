#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(9); // attach servo to pin 9
  //http://www.ee.ic.ac.uk/pcheung/teaching/DE1_EE/stores/sg90_datasheet.pdf
  // red = 5v
  // orange = pin 9
  // brown = ground
  delay (48600000); // 13.5hr delay. 7:30pm -> 9am. 
  // installed at 730pm to start feeding at 8am. 
  
}
void loop() {
//servo.write(10);
// 9am start the software
  for(int i=0;i<180; i++){ // feed the fish by turing the servo
    servo.write(i);
    delay(10);
  }

    for(int i=180; i>0; i--){
    servo.write(i);
    delay(10);
  }
    delay(28800000); // 8 hr delay. 9am -> 5pm. feed the fish again at 5pm

   for(int i=0;i<180; i++){
    servo.write(i);
    delay(10);
  }

    for(int i=180; i>0; i--){
    servo.write(i);
    delay(10);
  }

  delay(57600000); //16 hr delay 5pm -> 9am

}
