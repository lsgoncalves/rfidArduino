/*
 * RFID-125hrz
 * Arduino Mega 2560
 * (c) 2018, Leandro Gonçalves
 */

char ID ; //Variável para armazenar o caractere que foi recebido da ID que

void setup()
{

  Serial.begin(9600); //Inicia a serial com um baud rate de 9600

}

void loop ()
{

  if(Serial.available() > 0) //Se a serial receber algum caracter
  {
    ID = Serial.read(); //Armazena na variável ID o caracter recebido
    Serial.print(ID); //Imprime na serial o caracter recebido
  }

}
