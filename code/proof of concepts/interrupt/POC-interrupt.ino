const int StartKnop = 4;
const int Led = 3;

bool StatusLed = false;

void setup() {
  Serial.begin(9600);

  pinMode(Led, OUTPUT);
  pinMode(StartKnop, INPUT);  

  attachInterrupt(digitalPinToInterrupt(StartKnop), Interrupt, RISING);
}

void loop() {
  // Blauwe led aan of uit
  digitalWrite(Led, StatusLed);
}

void Interrupt() {
  Serial.println("Interrupt");
  StatusLed = !StatusLed;
}
