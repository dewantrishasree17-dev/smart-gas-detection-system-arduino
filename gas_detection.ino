// Pin Configurations
const int MQ135_PIN = A0;   // Gas sensor analog signal input
const int BUZZER_PIN = 8;   // Piezo buzzer digital output
const int LED_PIN = 13;     // Green LED digital output

// Threshold limit for gas concentration alert
const int GAS_THRESHOLD = 650; 

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);  // Set buzzer pin as output
  pinMode(LED_PIN, OUTPUT);     // Set LED pin as output
  Serial.begin(9600);           // Initialize Serial Monitor at 9600 baud rate
}

void loop() {
  // Read the analog value from the gas sensor
  int gasValue = analogRead(MQ135_PIN);
  
  // Print the value to the Serial Monitor for tracking
  Serial.print("Gas Concentration Level: ");
  Serial.println(gasValue);
  
  // Check if the reading crosses our safety threshold limit
  if (gasValue > GAS_THRESHOLD) {
    digitalWrite(BUZZER_PIN, HIGH);  // Turn buzzer ON
    digitalWrite(LED_PIN, HIGH);     // Turn LED ON
  } else {
    digitalWrite(BUZZER_PIN, LOW);   // Turn buzzer OFF
    digitalWrite(LED_PIN, LOW);      // Turn LED OFF
  }
  
  delay(500); // Wait half a second before taking the next reading
}
