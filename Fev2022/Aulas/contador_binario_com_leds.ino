//Link do circuito: https://www.tinkercad.com/things/10pfgdoZFQi-dazzling-robo-habbi/editel?tenant=circuits
//Portas usadas
#define D3 13// bit mais significativo.
#define D2 12
#define D1 11
#define D0 10//" " menos "            "
//vetor de  números em binário
int binario[][4] ={{0,0,0,0}// 00
                  ,{0,0,0,1}// 01
                  ,{0,0,1,0}// 02
                  ,{0,0,1,1}// 03
                  ,{0,1,0,0}// 04
                  ,{0,1,0,1}// 05
                  ,{0,1,1,0}// 06
                  ,{0,1,1,1}// 07
                  ,{1,0,0,0}// 08
                  ,{1,0,0,1}// 09
                  ,{1,0,1,0}// 10
                  ,{1,0,1,1}// 11
                  ,{1,1,0,0}// 12
                  ,{1,1,0,1}// 13
                  ,{1,1,1,0}// 14
                  ,{1,1,1,1}};//15
void setup()
{
  //definindo portas como output
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);

}
//contador
int i = 0;
void loop()
{
  //ligando portas
  digitalWrite(D3,binario[i][0]);
  digitalWrite(D2,binario[i][1]);
  digitalWrite(D1,binario[i][2]);
  digitalWrite(D0,binario[i][3]);
  //esperar 1s para trocar de número
  delay(1000);
  //caso o i > 15 reinicia a contagem 
  (i > 15)? i = 0: i++;
}
