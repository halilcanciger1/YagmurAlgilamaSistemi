
const int ledPin = 13;        // LED bağlı pin
const int speakerPin = 12;     


void setup() {
  pinMode(ledPin, OUTPUT);    
  pinMode(speakerPin, OUTPUT);
  pinMode (2 , INPUT);
  Serial.begin(9600);         // Seri haberleşmeyi başlat
}

void loop() {
   int rain = digitalRead(2);
  
  if (rain == 1) {
    Serial.println("Its Raining");
    digitalWrite(ledPin, HIGH);  // LED'i yak
    digitalWrite(speakerPin, HIGH); 
    
    delay(500);
  } 
  else if(rain==0){
    Serial.println("No Rain");
    digitalWrite(ledPin, LOW);   // LED'i söndür
    digitalWrite(speakerPin, LOW); 
    delay(500);
  }
  
}

