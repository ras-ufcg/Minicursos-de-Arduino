int saidaAnalog = 11; // Variável para o pino da Saída Analógica
int entradaAnalog = 0; // Variável para o pino da Entrada Analógica

void setup() // Só é executada uma vez, no início do programa
{
  Serial.begin(9600); // Inicializa a Comunicação Serial a 9600 baud ou bps (bits por segundo)
  pinMode(saidaAnalog, OUTPUT); // Define o pino como Saída Analógica
  
}

int leitura;

void loop() // É executada em loop 
{
 leitura = analogRead(0); // Lê a entrada do potenciômetro (0-1023) e armazena na variável leitura
 
 leitura = map(leitura, 0, 1023, 0, 255); // Converte a leitura de um número de 10 bits (0-1023) em um número de 8 bits (0-255)
  
 analogWrite(saidaAnalog, leitura); // Usa a leitura modificada para acender o LED
}