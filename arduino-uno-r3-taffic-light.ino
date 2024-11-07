#define LED1 13
#define LED2 11
#define LED3 9

void setup(){
	pinMode(LED1, OUTPUT);
  	pinMode(LED2, OUTPUT);
  	pinMode(LED3, OUTPUT);
}
  
void loop(){
  int counter = 0;
  
  while(counter <= 2){
  	if (counter == 0){
  		digitalWrite(LED1, HIGH);
      	delay(3000);
      	digitalWrite(LED1, LOW);
  	}else if(counter == 1){
  		digitalWrite(LED2, HIGH);
      	delay(3000);
      	digitalWrite(LED2, LOW);
  	}else if(counter == 2){
  		digitalWrite(LED3, HIGH);
      	delay(3000);
      	digitalWrite(LED3, LOW);
  	}
    counter++;
  }
  
  counter = 0;
}