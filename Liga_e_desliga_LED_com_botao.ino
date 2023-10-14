// C++ code
//
int EstadoBotao = 0;

int GuardaEstado = 0;

void setup()
{
  pinMode(12, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  EstadoBotao = digitalRead(12);
  if (EstadoBotao == HIGH) {
    if (GuardaEstado == HIGH) {
      GuardaEstado = LOW;
    } else {
      GuardaEstado = HIGH;
    }
  }
  if (GuardaEstado == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(250); // Wait for 250 millisecond(s)
}
