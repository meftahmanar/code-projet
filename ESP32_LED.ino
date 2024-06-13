// ESP32_LED.ino

// Définir la broche GPIO à laquelle la LED est connectée
const int ledPin = 2;

void setup() {
  // Initialiser la broche LED comme une sortie
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Allumer la LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Attendre 1 seconde

  // Éteindre la LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Attendre 1 seconde
}