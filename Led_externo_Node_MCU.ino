/* 
Pino Digital  e seu valor: 

Pino: GPIO5 , Constante : D1 , Valor : 5

*/
int ledRed= 5; // variável para o led vermelho no pino D1 (GPIO5)

void setup() {
  pinMode(ledRed, OUTPUT); // configuração como saída para o led vermelho.

}

void loop() {
  // função que se repete
  // Cliclo
   digitalWrite(ledRed, HIGH); // ligue o led vermelho  
   delay(200);  // deixe ligado por 1 segundo ou por 1000 milissegundos 
   
   digitalWrite(ledRed, LOW);  // Agora desligue o led vermelho
   delay(200);  // deixe ligado por 1 segundo ou por 1000 milissegundos 

}

/*
  Materiais utilizados: 
  1. Node MCU
  2. Protoboard
  3. Led vermelho 
  4. Resistor ohmico de 220 Ω
  5. Jumpers (vermelho e preto)

 Instruções: 
 Esse código tem o objetivo de fazer um LED vermelho ligar e desligar em um loop infinito enquanto o Node MCU estiver ligado.
  Conecte o resistor em série com o catodo do LED na protoboard. Logo em seguida, conecte o jumper vermelho no anodo do LED e no pino D1 do Node MCU, 
Depois, conecte o jumper preto na extremidade do resistor e no GND do Node MCU. 

Agora verifique o código e compile no Node MCU.
 */
