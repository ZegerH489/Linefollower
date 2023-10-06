const int StartKnop = 3;
const int Led = 4;

bool StatusLed = false;

void setup() {
  Serial.begin(9600);

  pinMode(Led, OUTPUT);
  pinMode(StartKnop, INPUT);  

  attachInterrupt(digitalPinToInterrupt(StartKnop), Interrupt, RISING);
}

void loop() {
  // Led aan of uit
  digitalWrite(Led, StatusLed);
}

void Interrupt() {
  Serial.println("Interrupt");
  StatusLed = !StatusLed;
}
