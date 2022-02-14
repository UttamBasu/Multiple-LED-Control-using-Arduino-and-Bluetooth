//Pin Connection
//Tx-Rx
//Rx-Tx
//Vcc- 5V
//GND-GND
//LED- Pin2
// Mobile Application Name- https://play.google.com/store/apps/details?id=com.csa.bluetoothremote&hl=en
//Made By- Uttam Basu

//Define All Output Pin
const int led1 = 2;   //For Power LED
const int ledR = 3;   //For Red LED
const int ledG = 4;   //For Green LED
const int ledB = 5;   //For BLue LED

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop()
{
  char c = Serial.read();
  
  //For Power LED
  if (c == 'a')
  {
    digitalWrite(led1, HIGH);
  }
  else if (c == 'b')
  {
    digitalWrite(led1, LOW);
  }
  
  //For Power RED LED
  else if (c == 'r')
  {
    digitalWrite(ledR, HIGH);
  }
  else if (c == 's')
  {
    digitalWrite(ledR, LOW);
  }

  //For Power Greeen LED
  else if (c == 'g')
  {
    digitalWrite(ledG, HIGH);
  }
  else if (c == 'h')
  {
    digitalWrite(ledG, LOW);
  }

   //For Power Blue LED
  else if (c == 'x')
  {
    digitalWrite(ledB, HIGH);
  }
  else if (c == 'y')
  {
    digitalWrite(ledB, LOW);
  }
  else
  {

  }
  delay(25);
}
