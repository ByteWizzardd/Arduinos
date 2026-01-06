int sensorPin = A0;
int buzzerPin = 8;
int sensorValue = 0;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // Iniciamos la comunicación con la PC
}

void loop() {
  sensorValue = analogRead(sensorPin);
 
  Serial.print("Luz detectada: ");
  Serial.println(sensorValue);

  int pitch = map(sensorValue, 0, 1023, 100, 2000); 
  tone(buzzerPin, pitch);
  delay(100);
}
