void setup() // Só é executada uma vez, no início do programa
{
  pinMode(LED_BUILTIN, OUTPUT); // Define o LED embutido como saída 
  randomSeed(analogRead(0)); // Embaralha o algoritmo de geração aleatória
}

void loop() // É executada em loop
{
  digitalWrite(LED_BUILTIN, HIGH); // Liga o LED embutido
  delay(random(10,1001)); // Espera de 10 a 1000 milissegundos 
  digitalWrite(LED_BUILTIN, LOW); // Desligaiga o LED embutido
  delay(random(10,1001)); // Espera de 10 a 1000 milissegundos
}