#include <Servo.h>

Servo motorUnico; // Um único servo para testar os 4

// --- Definição dos Pinos dos Sensores (Botões) ---
const int sensorIndutivo = 2;   // Metal
const int sensorCapacitivo = 3; // Plástico
const int sensorVidro = 4;      // Vidro
const int sensorPapel = 5;      // Papel

const int pinoServo = 9;        // Todos vão girar este servo
const int ledStatus = 6; 

void setup() {
  Serial.begin(9600);
  
  pinMode(sensorIndutivo, INPUT);
  pinMode(sensorCapacitivo, INPUT);
  pinMode(sensorVidro, INPUT);
  pinMode(sensorPapel, INPUT);
  
  pinMode(ledStatus, OUTPUT);
  motorUnico.attach(pinoServo);
  
  motorUnico.write(0); // Inicia fechado
  digitalWrite(ledStatus, HIGH); // Inicia aceso
  
  Serial.println("Sistema Pronto!");
}

void loop() {
  // 1. METAL
  if (digitalRead(sensorIndutivo) == HIGH) {
    Serial.println("Metal detectado!");
    digitalWrite(ledStatus, LOW); // Apaga LED
    motorUnico.write(90);         // Gira o motor
    delay(2000);
    motorUnico.write(0);
    digitalWrite(ledStatus, HIGH); // Acende LED
    delay(500);
  }

  // 2. PLÁSTICO
  if (digitalRead(sensorCapacitivo) == HIGH) {
    Serial.println("Plastico detectado!");
    digitalWrite(ledStatus, LOW); 
    motorUnico.write(90);
    delay(2000);
    motorUnico.write(0);
    digitalWrite(ledStatus, HIGH);
    delay(500);
  }

  // 3. VIDRO
  if (digitalRead(sensorVidro) == HIGH) {
    Serial.println("Vidro detectado!");
    digitalWrite(ledStatus, LOW); 
    motorUnico.write(90);
    delay(2000);
    motorUnico.write(0);
    digitalWrite(ledStatus, HIGH);
    delay(500);
  }

  // 4. PAPEL
  if (digitalRead(sensorPapel) == HIGH) {
    Serial.println("Papel detectado!");
    digitalWrite(ledStatus, LOW); 
    motorUnico.write(90);
    delay(2000);
    motorUnico.write(0);
    digitalWrite(ledStatus, HIGH);
    delay(500);
  }
}