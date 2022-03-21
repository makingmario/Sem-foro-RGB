void setup()
{
  pinMode(11, OUTPUT);//rojo
  pinMode(10, OUTPUT);//azul
  pinMode(9, OUTPUT); //verde
}

void loop()
{
  //estado 1: Rojo
  analogWrite(11,255-255);//rojo
  analogWrite(10,255-0);  //azul
  analogWrite(9 ,255-0);  //verde
  delay(4000);
  
  //estado 2: Naranja //AZUL
  analogWrite(11,255-0);//rojo
  analogWrite(10,255-255);  //azul
  analogWrite(9 ,255-0); //verde
  delay(2000);
  
  //estado 3: Verde
  analogWrite(11,255-0);  //rojo
  analogWrite(10,255-0);  //azul
  analogWrite(9 ,255-255);//verde
  delay(4000);
  
  //estado 4: Amarillo
  analogWrite(11,255-200);//rojo
  analogWrite(10,255-0);  //azul
  analogWrite(9 ,255-255);//verde
  delay(2000);
  
}
