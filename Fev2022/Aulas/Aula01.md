# Minicurso de Arduino

## Aula 01

- [Aula 01 - Minicurso de Arduino.pdf](https://drive.google.com/file/d/18n0MijFBTSwMIXVgBco_T741nLQxnMCc/view?usp=sharing)

- [Aula 01 - Minicurso de Arduino.mp4](https://drive.google.com/file/d/1-Ct3EIN1zmeNpw1duKxh4yyDGULjel-I/view?usp=sharing)

### Apostila PET Elétrica UFCG - Introdução à Plataforma Arduino

Para quem quer ter uma material texto mais dedicado para seguir estudando durante ou depois do minicurso recomendamos a apostila de introdução à Arduino feita pelo grupo PET Elétrica da UFCG.

- [Introducao_a_Plataforma_Arduino.pdf](https://drive.google.com/file/d/1LaX6tjZG9eEp2Zh4Npjx-CgLdFw2vAjc/view)

### Documentação Arduino

- [Documentação de Referência do Arduino - Documentação de Referência do Arduino](https://www.arduino.cc/reference/pt/)
- [UNO R3 | Arduino Documentation](https://docs.arduino.cc/hardware/uno-rev3)

### Arduino Pinout
 
![image](https://i.pinimg.com/originals/63/3c/45/633c45308db32e636c11bb4b852c4f00.png)

### Entradas e Saídas Digitais Arduino

- Um nível lógico **alto,** correspondente a **5V**;
- Um nível lógico **baixo,** correspondente a **0V**.

![image](https://user-images.githubusercontent.com/50165797/155438843-945f609d-c691-47fd-a3d0-6343488fd8ee.png)


### Programa Arduino - Sketch

- *setup()* – Inserida no início, na qual pode ser usada para inicializar configuração, e
- *loop()* – Chamada para repetir um bloco de comandos ou esperar até que seja desligada.

Habitualmente, o primeiro programa que é executado tem a simples função de piscar um **LED**. No ambiente de desenvolvimento, o utilizador escreve um programa exemplo como este:

```cpp
// define LED_PIN 13
int LED_PIN = 13;

void setup () {
    pinMode (LED_PIN, OUTPUT);     // habilita o pino 13 para saída digital (OUTPUT).
}

void loop () {
    digitalWrite (LED_PIN, HIGH);  // liga o LED.
    delay (1000);                  // espera 1 segundo (1000 milissegundos).
    digitalWrite (LED_PIN, LOW);   // desliga o LED.
    delay (1000);                  // espera 1 segundo.
}
```

O código acima não seria visto pelo compilador como um programa válido, então, quando o utilizador tentar carregá-lo para a placa, uma cópia do código é escrita para um arquivo temporário com um cabeçalho extra incluído no topo, e uma simples **função principal**
 como mostrada abaixo:

```cpp
# include<WProgram.h>

void setup () {
    pinMode (LED_PIN, OUTPUT);     // habilita o pino 13 para saída digital (OUTPUT).
}

void loop () {
    digitalWrite (LED_PIN, HIGH);  // liga o LED.
    delay (1000);                  // espera 1 segundo (1000 milissegundos).
    digitalWrite (LED_PIN, LOW);   // desliga o LED.
    delay (1000);                  // espera 1 segundo.
}

int main(void)
{
    // define LED_PIN 13
    int LED_PIN = 13;

    init();

    setup();

    for (;;)
        loop();

    return 0;
}
```

## Extras

### Machine Learning com Arduino

- [Arduino gesture recognition: the easy way with Machine Learning](https://eloquentarduino.github.io/2021/10/arduino-gesture-recognition-the-easy-way-with-machine-learning/#tocstep-2-train-a-machine-learning-model-for-gesture-recognition)

### Programando Arduino com Python

- [Como conectar o Arduino com o Python - Blog Eletrogate](https://blog.eletrogate.com/como-conectar-o-arduino-com-o-python/)
