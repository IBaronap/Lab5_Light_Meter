const int Light5 = 6, Light4 = 5, Light3 = 4, Light2 = 3, Light1 = 2;

const int pinPhoto = A0;
int photoValue = 0;

void setup() {
  pinMode(Light1, OUTPUT);
  pinMode(Light2, OUTPUT);
  pinMode(Light3, OUTPUT);
  pinMode(Light4, OUTPUT);
  pinMode(Light5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  photoValue = analogRead(pinPhoto);
  Serial.println(photoValue);

 if (photoValue < 500) {
    digitalWrite(Light1, HIGH); 
  }
  
 if (photoValue > 500) {
    digitalWrite(Light2, HIGH);
  } else {
    digitalWrite(Light2, LOW); 
  }
  
  if (photoValue > 700) {
    digitalWrite(Light3, HIGH);
  } else {
    digitalWrite(Light3, LOW); 
  }
  
  if (photoValue > 800) {
    digitalWrite(Light4, HIGH);
  } else {
    digitalWrite(Light4, LOW); 
  }
  
   if (photoValue > 900) {
    digitalWrite(Light5, HIGH);
  } else {
    digitalWrite(Light5, LOW); 
  }
  
  delay(100);
}