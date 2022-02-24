void setup() // Só é executada uma vez, no início do programa
{
  pinMode(8, OUTPUT); // Define o pino 8 como saída
}

void loop() // É executada em loop
{
  digitalWrite(8, HIGH); // Liga o pino 8 
  delay(1000); // Espera 1000 milissegundos (1 segundo)
  digitalWrite(8, LOW); // Desliga o pino 8
  delay(1000); // Espera 1000 milissegundos (1 segundo)
}

