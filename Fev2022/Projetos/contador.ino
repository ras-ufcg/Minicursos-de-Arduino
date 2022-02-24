void setup() // Só é executada uma vez, no início do programa
{
  Serial.begin(9600); // Inicializa a Comunicação Serial a 9600 baud ou bps (bits por segundo)
  pinMode(3,INPUT_PULLUP); // Define o pino 3 como leitura ativa
}

bool leitura_anterior = HIGH; // Variável que armazena a leitura do loop anterior
bool leitura_atual; // Variável que armazena a leitura do loop atual
int contador = 0; // Variável que armazena o número de vezes que o botão foi apertado

void loop() // É executada em loop 
{
  bool leitura_atual = digitalRead(3); // Lê o pino 3
  if(leitura_atual == LOW && leitura_anterior == HIGH) // Só é executado caso o botão esteja pressionado e na última iterção do loop ele não estava
  {
    contador++; // Adiciona 1 no número do contador
    Serial.println(contador); // Imprime o contador
  }
  
  leitura_anterior = leitura_atual; // Atualiza a leitura
}