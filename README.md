# Controle de LEDs com Arduino

Este projeto controla três LEDs usando um Arduino, acendendo cada LED em sequência por 3 segundos antes de avançar para o próximo. O processo é repetido continuamente em um loop, proporcionando uma exibição simples de luzes em sequência.

## Funcionalidades

- Acende três LEDs (nas portas 13, 11 e 9) em sequência.
- Cada LED permanece aceso por 3 segundos.
- Ciclo contínuo que reinicia após o terceiro LED.

## Estrutura do Projeto

- **`codigo.ino`**: Contém o código principal para controlar os LEDs.
- **`sketch.json`**: Arquivo de configuração com metadados do projeto, útil para importação no Arduino Web Editor.

## Componentes Necessários

- Placa Arduino (como Arduino Uno)
- LEDs
- Resistores (220Ω recomendados)
- Jumpers para conexão

## Como Usar

1. Conecte os LEDs às portas digitais 13, 11 e 9 do Arduino.
2. Carregue o código na placa Arduino.
3. Observe os LEDs acendendo em sequência, com um intervalo de 3 segundos.

## Código

```cpp
#define LED1 13
#define LED2 11
#define LED3 9

void setup(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop(){
  int counter = 0;

  while(counter <= 2){
    if (counter == 0){
      digitalWrite(LED1, HIGH);
      delay(3000);
      digitalWrite(LED1, LOW);
    } else if(counter == 1){
      digitalWrite(LED2, HIGH);
      delay(3000);
      digitalWrite(LED2, LOW);
    } else if(counter == 2){
      digitalWrite(LED3, HIGH);
      delay(3000);
      digitalWrite(LED3, LOW);
    }
    counter++;
  }
  counter = 0;
}
