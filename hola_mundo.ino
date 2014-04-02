int led = 13; // Creamos una variable de tipo entero (integer) con el valor 13
 
void setup(){ // Se ejecuta cada vez que el Arduino se inicia
  pinMode(led, OUTPUT); // Indicamos que el pin 13 es de salida  
}
 
void loop(){  // Esta funcion se mantiene ejecutando
  digitalWrite(led, HIGH); // Hacemos que se encienda el led
  delay(1000); // Esperamos un segundo (1000 ms = 1s)
  digitalWrite(led, LOW); // Hacemos que se apague el led
  delay(1000); // Esperamos un segundo (1000 ms = 1s)
}
