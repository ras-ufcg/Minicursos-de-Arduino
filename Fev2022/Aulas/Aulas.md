# Minicurso de Arduino
<img src="https://img.icons8.com/color/48/000000/arduino.png"/>

## Sumário

1. [Introdução](#introdução)
2. [Sobre](#sobre)
3. [Aula 01](#aula-01)
4. [Aula 02](#aula-02)
5. [Aula 03](#aula-03)
6. [Ministrantes](#ministrantes)

## Introdução

Arduino é uma plataforma de prototipagem eletrônica *open source*. Este minicurso proporcionará uma visão inicial da estrutura física e lógica dessa plataforma e seu microcontrolador, introduzindo seus elementos de programação, e o aplicando em alguns projetos eletrônicos de maneira interativa utilizando o software de simulação Tinkercad.

## Sobre

O minicurso foi organizado pelo Capítulo Estudantil IEEE RAS UFCG e ministrados por voluntários e membros do capítulo. Essa atividade tem como objetivo de  aprimorar habilidades técnicas e sociais dos voluntários, sejam eles ministrantes ou alunos, contribuindo com o capítulo e sua comunidade. Essa atividade foi idealizada para introduzir e apresentar um a eletrônica e programação por meio do Arduino.

## Aula 01

- [Aula 01 - Minicurso de Arduino - RAS UFCG.pdf](https://drive.google.com/file/d/18n0MijFBTSwMIXVgBco_T741nLQxnMCc/view?usp=sharing)

- [Aula 01 - Minicurso de Arduino - RAS UFCG.mp4](https://drive.google.com/file/d/1-Ct3EIN1zmeNpw1duKxh4yyDGULjel-I/view?usp=sharing)

### Apostila PET Elétrica UFCG - Introdução à Plataforma Arduino

Para quem quer ter uma material texto mais dedicado para seguir estudando durante ou depois do minicurso recomendamos a apostila de introdução à Arduino feita pelo grupo PET Elétrica da UFCG.

- [Introducao a Plataforma Arduino.pdf](https://drive.google.com/file/d/1LaX6tjZG9eEp2Zh4Npjx-CgLdFw2vAjc/view)

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

## Aula 02
- [Aula 02 - Minicurso de Arduino - RAS UFCG.pdf](https://drive.google.com/file/d/10ISM89wmrocrl0VbgiKFy3ZbcB1CFM-d/view?usp=sharing)
- [Aula 02 - Minicurso de Arduino - RAS UFCG.mp4](https://drive.google.com/file/d/1wPtm7PXk8aNiiIdMaTJUC2kk0CaZN0Dh/view?usp=sharing)

## Aula 03

- [Aula 03 - Minicurso de Arduino - RAS UFCG.pdf](https://drive.google.com/file/d/1gvRBVCEWn7YIa8bmTW8B7y9ids89r1GD/view?usp=sharing)
- [https://drive.google.com/file/d/1cjrSJ_XX3YDOlJSVX_ca58taXPeJM89z/view](https://drive.google.com/file/d/1cjrSJ_XX3YDOlJSVX_ca58taXPeJM89z/view)

### Arduino Documentação

- [Arduino Documentation](https://docs.arduino.cc/)
- [Arduino Reference](https://www.arduino.cc/reference/en/)

### Arduino com Pyhton

- [Como conectar o Arduino com o Python - Blog Eletrogate](https://blog.eletrogate.com/como-conectar-o-arduino-com-o-python/)
- [Arduino With Python: How to Get Started - Real Python](https://realpython.com/arduino-python/)

### Projeto Simples

- [Robô Arduino Jogo Dino Google](https://www.youtube.com/watch?v=zcCXxJungLc)

## Aprendendo...

### Tutoriais RAS UFCG

- [Tutoriais - Capítulo Estudantil IEEE RAS UFCG](https://edu.ieee.org/br-ufcgras/tutoriais/)

### Linguagem C e C++

- [YouTube - Programação em C - Aula 1 - Abertura do Curso de C - eXcript](https://www.youtube.com/watch?v=FH7YrE0RjWE&list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4)
- [YouTube- Welcome to C++ - The Cherno](https://www.youtube.com/watch?v=18c3MTX0PK0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)
- [Livro - Começando a programar em C para leigos](https://www.amazon.com.br/Come%C3%A7ando-programar-para-leigos-Gookin/dp/8576089750/ref=asc_df_8576089750/?tag=googleshopp00-20&linkCode=df0&hvadid=379708205007&hvpos=&hvnetw=g&hvrand=10452134565154992341&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1001621&hvtargid=pla-424463400177&psc=1)

### Eletrônica

- [YouTube - Eletrônica para Iniciantes - Wrkits](https://www.youtube.com/watch?v=W_q_Cl-Qd5c&list=PLZ8dBTV2_5HQpKzBt3nJex3Mbk7hmhFHl)
- [YouTube - This component can control tons of circuits! Digital Potentiometer Guide! - GreatScott!](https://www.youtube.com/watch?v=uezoQ5fkixY&list=PLAROrg3NQn7cyu01HpOv5BWo217XWBZu0)
- [Livro - Eletrônica Para Leigos](https://www.amazon.com.br/Eletr%C3%B4nica-Para-Leigos-Cathleen-Shamieh/dp/8576084465)

### Processing

- [Visualization with Arduino and Processing - Arduino Education](https://www.arduino.cc/education/visualization-with-arduino-and-processing)
- [Radar com Arduino e Processing - FilipeFlop](https://www.filipeflop.com/blog/radar-ultrassonico-com-arduino-e-processing/)
- [YouTube - Processing Tutorial - The Coding Train](https://www.youtube.com/watch?v=2VLaIr5Ckbs&list=PLzJbM9-DyOZyMZzVda3HaWviHqfPiYN7e)

## Lojas de Eletrônica - Campina Grande

- [ByteFlop](https://www.byteflop.com.br/)
- [VOLTRIZ - Soluções em Eletroeletrônica](https://www.voltriz.com.br/)

## Ministrantes
- [Lorenzo Carrera de Oliveira](https://github.com/loolirer)

[![my email](https://img.shields.io/static/v1?style=flat&logo=gmail&labelColor=fafafa&label=Email&message=lorenzo.oliveira@ee.ufcg.edu.br&color=red)](mailto:lorenzo.oliveira@ee.ufcg.edu.br)

- [Vitor Lucas dos Santos Teixeira](https://github.com/Vitorluca)

[![my email](https://img.shields.io/static/v1?style=flat&logo=gmail&labelColor=fafafa&label=Email&message=vitor.teixeira@ee.ufcg.edu.br&color=red)](mailto:vitor.teixeira@ee.ufcg.edu.br)
