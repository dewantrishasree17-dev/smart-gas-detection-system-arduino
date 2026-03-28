#define MQ_PIN A0
#define BUZZER_PIN 8
#define GREEN_LED 6

int gasValue;
int threshold = 35;   // adjust according to readings

void setup() {

  Serial.begin(9600);

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(GREEN_LED, HIGH);   // safe condition initially

  Serial.println("Gas Detection System Started");
}

void loop() {

  gasValue = analogRead(MQ_PIN);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  if (gasValue > threshold) {

    digitalWrite(BUZZER_PIN, HIGH);  // buzzer ON (danger)
    digitalWrite(GREEN_LED, LOW);    // LED OFF (unsafe)

    Serial.println("Gas/Smoke Detected!");

  } 
  else {

    digitalWrite(BUZZER_PIN, LOW);   // buzzer OFF (safe)
    digitalWrite(GREEN_LED, HIGH);   // LED ON (safe)

  }

  delay(500);
}
