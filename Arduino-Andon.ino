
#include "SoftwareSerial.h"

SoftwareSerial mySerial(2, 3);
unsigned long startMillis1 = 0;
unsigned long startMillis2 = 0;
unsigned long startMillis3 = 0;
unsigned long startMillis4 = 0;
unsigned long startMillis5 = 0;
unsigned long startMillis6 = 0;
unsigned long startMillis7 = 0;
unsigned long startMillis8 = 0;
unsigned long startMillis9 = 0;
unsigned long startMillis10 = 0;
unsigned long startMillis11 = 0;
unsigned long startMillis12 = 0;
unsigned long startMillis13 = 0;
unsigned long startMillis14 = 0;
unsigned long startMillis15 = 0;
unsigned long startMillis16 = 0;
unsigned long startMillis17 = 0;
unsigned long currentMillis = 0;


String cmd = "";
bool rele1 = false;
bool rele2 = false;
bool rele3 = false;
bool rele4 = false;
bool rele5 = false;
bool area407_930 = false;
bool area407_954 = false;
bool area429_930 = false;
bool area429_942 = false;
bool area429_944 = false;
bool area429_949 = false;
bool area429_952 = false;
bool area429_958 = false;
bool area429_961 = false;
bool area429_962 = false;
bool areaK70 = false;
bool areaK71 = false;
bool areaK72 = false;
bool areaN70 = false;
bool areaN72 = false;
bool areaN75 = false;
bool areaC11 = false;
bool areaEMB_MMX = false;
bool areaFAB = false;
bool areaALM = false;
bool areaPIN = false;
bool areaMTO = false;

void setup()
{
  //startMillis1 = millis();
  
  pinMode(22,INPUT);      //407-930
  pinMode(23,INPUT);      //407-954
  pinMode(24,INPUT);      //429-930
  pinMode(25,INPUT);      //429-942
  pinMode(26,INPUT);      //429-944
  pinMode(27,INPUT);      //429-949
  pinMode(28,INPUT);      //429-952
  pinMode(29,INPUT);      //429-958
  pinMode(30,INPUT);      //429-961
  pinMode(31,INPUT);      //429-962
  pinMode(32,INPUT);      //K70
  pinMode(33,INPUT);      //K71
  pinMode(34,INPUT);      //K72
  pinMode(35,INPUT);      //N70
  pinMode(36,INPUT);      //N72
  pinMode(37,INPUT);      //N75
  pinMode(38,INPUT);      //C11
  
  mySerial.begin(9600);
  //Serial.begin(9600);
  //Serial.println("Initializing...");

  mySerial.println("AT");                 // Sends an ATTENTION command, reply should be OK
  updateSerial();
  mySerial.println("AT+CMGF=1");          // Configuration for sending SMS
  updateSerial();
  mySerial.println("AT+CNMI=1,2,0,0,0");  // Configuration for receiving SMS
  updateSerial();
}

void loop()
{
  delay(500);
  currentMillis = millis();
  
  updateSerial();

  //Leer codigo binario
  if(digitalRead(22)==HIGH || digitalRead(23)==HIGH || digitalRead(24)==HIGH || digitalRead(25)==HIGH || digitalRead(26)==HIGH || digitalRead(27)==HIGH || digitalRead(28)==HIGH || digitalRead(29)==HIGH || digitalRead(30)==HIGH || digitalRead(31)==HIGH || digitalRead(32)==HIGH || digitalRead(33)==HIGH || digitalRead(34)==HIGH || digitalRead(35)==HIGH || digitalRead(36)==HIGH || digitalRead(37)==HIGH || digitalRead(38)==HIGH )
  {
    
    /*
    bool rele1 = digitalRead(22);
    bool rele2 = digitalRead(24);
    bool rele3 = digitalRead(26);
    bool rele4 = digitalRead(28);
    bool rele5 = digitalRead(30);
    */


////////////////////////////////////////////////////////////     407     ///////////////////////////////////////////////

    //407 - 930
    if(digitalRead(22)==HIGH )
    {
      if(area407_930==false)
      {

        startMillis1 = millis();
        area407_930 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526142558245\"\r");
        delay(500);
        mySerial.print("El area 407_930 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 407_930 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 407_930 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 407_930 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis1 >= 900000 && currentMillis - startMillis1 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526142356384\"\r");
             delay(500);
             mySerial.print("El area 407_930 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 407_930 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 407_930 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis1 >= 2700000 && currentMillis - startMillis1 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 407_930 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 407_930 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 407_930 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area407_930 = false;
        startMillis1 = 0;
    }


    //407 - 954
    if(digitalRead(23)==HIGH )
    {
      if(area407_954==false)
      {
        startMillis2 = millis();
        area407_954 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526142558245\"\r");
        delay(500);
        mySerial.print("El area 407_954 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 407_954 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 407_954 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 407_954 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis2 >= 900000 && currentMillis - startMillis2 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526142356384\"\r");
             delay(500);
             mySerial.print("El area 407_954 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 407_954 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 407_954 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis2 >= 2700000 && currentMillis - startMillis2 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 407_954 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 407_954 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 407_954 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area407_954 = false;
        startMillis2 = 0;
    }



////////////////////////////////////////////////////////429/////////////////////////////////////////////////



    //429 - 930
    if(digitalRead(24)==HIGH )
    {
      if(area429_930==false)
      {
        startMillis3 = millis();
        area429_930 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526143797434\"\r");
        delay(500);
        mySerial.print("El area 429_930 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_930 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_930 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_930 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis3 >= 900000 && currentMillis - startMillis3 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_930 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_930 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_930 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis3 >= 2700000 && currentMillis - startMillis3 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_930 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_930 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_930 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_930 = false;
        startMillis3 = 0;
    }



    //429 - 942
    if(digitalRead(25)==HIGH )
    {
      if(area429_942==false)
      {
        startMillis4 = millis();
        area429_942 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146009077\"\r");
        delay(500);
        mySerial.print("El area 429_942 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_942 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_942 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_942 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis4 >= 900000 && currentMillis - startMillis4 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_942 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_942 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_942 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis4 >= 2700000 && currentMillis - startMillis4 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_942 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_942 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_942 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_942 = false;
        startMillis4 = 0;
    }    


    
    //429 - 944
    if(digitalRead(26)==HIGH )
    {
      if(area429_944==false)
      {
        startMillis5 = millis();
        area429_944 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146009077\"\r");
        delay(500);
        mySerial.print("El area 429_944 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_944 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_944 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_944 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis5 >= 900000 && currentMillis - startMillis5 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_944 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_944 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_944 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis5 >= 2700000 && currentMillis - startMillis5 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_944 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_944 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_944 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_944 = false;
        startMillis5 = 0;
    }



    //429 - 949
    if(digitalRead(27)==HIGH )
    {
      if(area429_949==false)
      {
        startMillis6 = millis();
        area429_949 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526143797434\"\r");
        delay(500);
        mySerial.print("El area 429_949 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_949 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_949 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_949 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis6 >= 900000 && currentMillis - startMillis6 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_949 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_949 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_949 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis6 >= 2700000 && currentMillis - startMillis6 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_949 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_949 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_949 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_949 = false;
        startMillis6 = 0;
    }



    //429 - 952
    if(digitalRead(28)==HIGH )
    {
      if(area429_952==false)
      {
        startMillis7 = millis();
        area429_952 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526143797434\"\r");
        delay(500);
        mySerial.print("El area 429_952 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_952 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_952 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_952 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis7 >= 900000 && currentMillis - startMillis7 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_952 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_952 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_952 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis7 >= 2700000 && currentMillis - startMillis7 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_952 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_952 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_952 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_952 = false;
        startMillis7 = 0;
    }


    
    //429 - 958
    if(digitalRead(29)==HIGH )
    {
      if(area429_958==false)
      {
        startMillis8 = millis();
        area429_958 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146009077\"\r");
        delay(500);
        mySerial.print("El area 429_958 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_958 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_958 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_958 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis8 >= 900000 && currentMillis - startMillis8 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_958 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_958 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_958 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis8 >= 2700000 && currentMillis - startMillis8 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_958 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_958 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_958 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_958 = false;
        startMillis8 = 0;
    }



    //429 - 961
    if(digitalRead(30)==HIGH )
    {
      if(area429_961==false)
      {
        startMillis9 = millis();
        area429_961 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146009077\"\r");
        delay(500);
        mySerial.print("El area 429_961 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_961 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_961 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_961 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis9 >= 900000 && currentMillis - startMillis9 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_961 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_961 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_961 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis9 >= 2700000 && currentMillis - startMillis9 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_961 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_961 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_961 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_961 = false;
        startMillis9 = 0;
    }



    //429 - 962
    if(digitalRead(31)==HIGH )
    {
      if(area429_962==false)
      {
        startMillis10 = millis();
        area429_962 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146009077\"\r");
        delay(500);
        mySerial.print("El area 429_962 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area 429_962 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area 429_962 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area 429_962 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis10 >= 900000 && currentMillis - startMillis10 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area 429_962 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_962 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_962 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis10 >= 2700000 && currentMillis - startMillis10 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area 429_962 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area 429_962 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area 429_962 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        area429_962 = false;
        startMillis10 = 0;
    }



////////////////////////////////////////////////////////////SUB-ENSAMBLES///////////////////////////////////////////



    //K70
    if(digitalRead(32)==HIGH )
    {
      if(areaK70==false)
      {
        startMillis11 = millis();
        areaK70 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146109606\"\r");
        delay(500);
        mySerial.print("El area K70 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area K70 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area K70 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area K70 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis11 >= 900000 && currentMillis - startMillis11 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area K70 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area K70 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area K70 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis11 >= 2700000 && currentMillis - startMillis11 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area K70 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area K70 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area K70 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        areaK70 = false;
        startMillis11 = 0;
    }



    //K71
    if(digitalRead(33)==HIGH )
    {
      if(areaK71==false)
      {
        startMillis12 = millis();
        areaK71 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146109606\"\r");
        delay(500);
        mySerial.print("El area K71 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area K71 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area K71 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area K71 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis12 >= 900000 && currentMillis - startMillis12 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area K71 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area K71 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area K71 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis12 >= 2700000 && currentMillis - startMillis12 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area K71 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area K71 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area K71 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        areaK71 = false;
        startMillis12 = 0;
    }



    //K72
    if(digitalRead(34)==HIGH )
    {
      if(areaK72==false)
      {
        startMillis13 = millis();
        areaK72 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526146109606\"\r");
        delay(500);
        mySerial.print("El area K72 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area K72 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area K72 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area K72 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis13 >= 900000 && currentMillis - startMillis13 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526141036767\"\r");
             delay(500);
             mySerial.print("El area K72 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area K72 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area K72 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis13 >= 2700000 && currentMillis - startMillis13 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area K72 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area K72 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area K72 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        areaK72 = false;
        startMillis13 = 0;
    }



//////////////////////////////////////////////////////ELECTRICA//////////////////////////////////////////



    //N70
    if(digitalRead(35)==HIGH )
    {
      if(areaN70==false)
      {
        startMillis14 = millis();
        areaN70 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526144099093\"\r");
        delay(500);
        mySerial.print("El area N70 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area N70 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area N70 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area N70 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis14 >= 900000 && currentMillis - startMillis14 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526142356384\"\r");
             delay(500);
             mySerial.print("El area N70 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area N70 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area N70 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis14 >= 2700000 && currentMillis - startMillis14 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area N70 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area N70 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area N70 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        areaN70 = false;
        startMillis14 = 0;
    }



    //N72
    if(digitalRead(36)==HIGH )
    {
      if(areaN72==false)
      {
        startMillis15 = millis();
        areaN72 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526144099093\"\r");
        delay(500);
        mySerial.print("El area N72 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area N72 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area N72 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area N72 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis15 >= 900000 && currentMillis - startMillis15 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526142356384\"\r");
             delay(500);
             mySerial.print("El area N72 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area N72 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area N72 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis15 >= 2700000 && currentMillis - startMillis15 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area N72 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area N72 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area N72 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        areaN72 = false;
        startMillis15 = 0;
    }  



    //N75
    if(digitalRead(37)==HIGH )
    {
      if(areaN75==false)
      {
        startMillis16 = millis();
        areaN75 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526144099093\"\r");
        delay(500);
        mySerial.print("El area N75 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area N75 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area N75 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area N75 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis16 >= 900000 && currentMillis - startMillis16 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526142356384\"\r");
             delay(500);
             mySerial.print("El area N75 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area N75 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area N75 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis16 >= 2700000 && currentMillis - startMillis16 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area N75 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area N75 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area N75 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        areaN75 = false;
        startMillis16 = 0;
    }



    //C11
    if(digitalRead(38)==HIGH )
    {
      if(areaC11==false)
      {
        startMillis17 = millis();
        areaC11 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);

        //Numero 1 LIDER
        mySerial.println("AT+CMGS=\"+526144099093\"\r");
        delay(500);
        mySerial.print("El area C11 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 2 DIEGO
        mySerial.println("AT+CMGS=\"+526143343975\"\r");
        delay(500);
        mySerial.print("El area C11 requiere su atencion");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 3 PACHECO
        mySerial.println("AT+CMGS=\"+526141835214\"\r");
        delay(500);
        mySerial.print("El area C11 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        //Numero 4 SALAS
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("El area C11 requiere su atencion (MENSAJE A LIDERES)");
        delay(500);
        mySerial.write(26);
        delay(5000);

        /*//Numero 2
        mySerial.println("AT+CMGS=\"+526143841936\"\r");
        delay(500);
        mySerial.print("Mensaje 2");
        delay(500);
        mySerial.write(26);
        //delay(5000);
        */
      }
      else
      {
          if(currentMillis - startMillis17 >= 900000 && currentMillis - startMillis17 <= 902000)
          {
             //GERENTE
             mySerial.println("AT+CMGS=\"+526142356384\"\r");
             delay(500);
             mySerial.print("El area C11 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area C11 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area C11 requiere su atencion (MENSAJE A GERENTE)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
          
          if(currentMillis - startMillis17 >= 2700000 && currentMillis - startMillis17 <= 2702000)
          {
             //ADOLFO
             mySerial.println("AT+CMGS=\"+526141962309\"\r");
             delay(500);
             mySerial.print("El area C11 requiere su atencion");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 2 PACHECO
             mySerial.println("AT+CMGS=\"+526141835214\"\r");
             delay(500);
             mySerial.print("El area C11 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);

             //Numero 3 SALAS
             mySerial.println("AT+CMGS=\"+526143841936\"\r");
             delay(500);
             mySerial.print("El area C11 requiere su atencion (MENSAJE A ADOLFO)");
             delay(500);
             mySerial.write(26);
             delay(5000);
          }
      }
    }
    else
    {
        areaC11 = false;
        startMillis17 = 0;
    }



////////////////////////////////////////////// OTROS /////////////////////////////////////////////////////////////////


// NO SE PUSIERON PORQUE NO SE UTILIZAN, APARTE CUANDO SE COLOQUE EL SISTEMA REAL YA LO INCLUIREMOS

    
/*

    //407 - 954
    if(rele5==LOW && rele4==LOW && rele3==LOW && rele2==HIGH && rele1==LOW)
    {
      if(area407_954 == false)
      {
        area407_954 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area407_954");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area407_954 = false;
    }




////////////////////////////////////////////////////////////     429     ///////////////////////////////////////////////


    //429 - 930
    if(rele5==LOW && rele4==LOW && rele3==LOW && rele2==HIGH && rele1==HIGH)
    {
      if(area429_930 == false)
      {
        area429_930 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_930");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_930 = false;
    }



    //429 - 942
    if(rele5==LOW && rele4==LOW && rele3==HIGH && rele2==LOW && rele1==LOW)
    {
      if(area429_942 == false)
      {
        area429_942 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_942");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_942 = false;
    }



    //429 - 944
    if(rele5==LOW && rele4==LOW && rele3==HIGH && rele2==LOW && rele1==HIGH)
    {
      if(area429_944 == false)
      {
        area429_944 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_944");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_944 = false;
    }



    //429 - 949
    if(rele5==LOW && rele4==LOW && rele3==HIGH && rele2==HIGH && rele1==LOW)
    {
      if(area429_949 == false)
      {
        area429_949 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_949");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_949 = false;
    }



    //429 - 952
    if(rele5==LOW && rele4==LOW && rele3==HIGH && rele2==HIGH && rele1==HIGH)
    {
      if(area429_952 == false)
      {
        area429_952 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_952");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_952 = false;
    }



    //429 - 958
    if(rele5==LOW && rele4==HIGH && rele3==LOW && rele2==LOW && rele1==LOW)
    {
      if(area429_958 == false)
      {
        area429_958 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_958");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_958 = false;
    }



    //429 - 961
    if(rele5==LOW && rele4==HIGH && rele3==LOW && rele2==LOW && rele1==HIGH)
    {
      if(area429_961 == false)
      {
        area429_961 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_961");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_961 = false;
    }



    //429 - 962
    if(rele5==LOW && rele4==HIGH && rele3==LOW && rele2==HIGH && rele1==LOW)
    {
      if(area429_962 == false)
      {
        area429_962 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("area429_962");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        area429_962 = false;
    }





////////////////////////////////////////////////////////////     SUB-ENSAMBLES     ///////////////////////////////////////////////


    //K70
    if(rele5==LOW && rele4==HIGH && rele3==LOW && rele2==HIGH && rele1==HIGH)
    {
      if(areaK70 == false)
      {
        areaK70 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaK70");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaK70 = false;
    }



    //K71
    if(rele5==LOW && rele4==HIGH && rele3==HIGH && rele2==LOW && rele1==LOW)
    {
      if(areaK71 == false)
      {
        areaK71 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaK71");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaK71 = false;
    }



    //K72
    if(rele5==LOW && rele4==HIGH && rele3==HIGH && rele2==LOW && rele1==HIGH)
    {
      if(areaK72 == false)
      {
        areaK72 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaK72");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaK72 = false;
    }






////////////////////////////////////////////////////////////     ELECTRICA     ///////////////////////////////////////////////


    //N70
    if(rele5==LOW && rele4==HIGH && rele3==HIGH && rele2==HIGH && rele1==LOW)
    {
      if(areaN70 == false)
      {
        areaN70 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaN70");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaN70 = false;
    }



    //N72
    if(rele5==LOW && rele4==HIGH && rele3==HIGH && rele2==HIGH && rele1==HIGH)
    {
      if(areaN72 == false)
      {
        areaN72 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaN72");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaN72 = false;
    }



    //N75
    if(rele5==HIGH && rele4==LOW && rele3==LOW && rele2==LOW && rele1==LOW)
    {
      if(areaN75 == false)
      {
        areaN75 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaN75");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaN75 = false;
    }



    //C11
    if(rele5==HIGH && rele4==LOW && rele3==LOW && rele2==LOW && rele1==HIGH)
    {
      if(areaC11 == false)
      {
        areaC11 = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaC11");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaC11 = false;
    }




////////////////////////////////////////////////////////////     OTROS     ///////////////////////////////////////////////



    //EMB MMX
    if(rele5==HIGH && rele4==LOW && rele3==LOW && rele2==HIGH && rele1==LOW)
    {
      if(areaEMB_MMX == false)
      {
        areaEMB_MMX = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaEMB_MMX");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaEMB_MMX = false;
    }



    //FAB
    if(rele5==HIGH && rele4==LOW && rele3==LOW && rele2==HIGH && rele1==HIGH)
    {
      if(areaFAB == false)
      {
        areaFAB = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaFAB");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaFAB = false;
    }



    //ALM
    if(rele5==HIGH && rele4==LOW && rele3==HIGH && rele2==LOW && rele1==LOW)
    {
      if(areaALM == false)
      {
        areaALM = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaALM");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaALM = false;
    }



    //PIN
    if(rele5==HIGH && rele4==LOW && rele3==HIGH && rele2==LOW && rele1==HIGH)
    {
      if(areaPIN == false)
      {
        areaPIN = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaPIN");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaPIN = false;
    }



    //MTO
    if(rele5==HIGH && rele4==LOW && rele3==HIGH && rele2==HIGH && rele1==LOW)
    {
      if(areaMTO == false)
      {
        areaMTO = true;
        mySerial.println("AT+CMGF=1");
        delay(500);
        mySerial.println("AT+CMGS=\"+526142183611\"\r");
        delay(500);
        mySerial.print("areaMTO");
        delay(500);
        //mySerial.println("AT+CMGS=\"+526143841936\"\r");
        //delay(500);
        //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
        //delay(500);
        mySerial.write(26);
      }   
    }
    else
    {
        areaMTO = false;
    }
*/
/////////////////////////////////////////////////////  FIN  /////////////////////////////////////////////////////////////
    
  }
  else
  {
    area407_930 = false;
    area407_954 = false;
    area429_930 = false;
    area429_942 = false;
    area429_944 = false;
    area429_949 = false;
    area429_952 = false;
    area429_958 = false;
    area429_961 = false;
    area429_962 = false;
    areaK70 = false;
    areaK71 = false;
    areaK72 = false;
    areaN70 = false;
    areaN72 = false;
    areaN75 = false;
    areaC11 = false;
    areaEMB_MMX = false;
    areaFAB = false;
    areaALM = false;
    areaPIN = false;
    areaMTO = false;

    startMillis1 = 0;
    startMillis2 = 0;
    startMillis3 = 0;
    startMillis4 = 0;
    startMillis5 = 0;
    startMillis6 = 0;
    startMillis7 = 0;
    startMillis8 = 0;
    startMillis9 = 0;
    startMillis10 = 0;
    startMillis11 = 0;
    startMillis12 = 0;
    startMillis13 = 0;
    startMillis14 = 0;
    startMillis15 = 0;
    startMillis16 = 0;
    startMillis17 = 0;
    currentMillis = 0;
  }
}

  /*
  if(digitalRead(22)==HIGH && area1 == false)
  {
      area1 = true;
      mySerial.println("AT+CMGF=1");
      delay(500);
      mySerial.println("AT+CMGS=\"+526142183611\"\r");
      delay(500);
      mySerial.print("area 1");
      delay(500);
      //mySerial.println("AT+CMGS=\"+526143841936\"\r");
      //delay(500);
      //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
      //delay(500);
      mySerial.write(26);
  }
  else if(digitalRead(22)==LOW)
  {
    area1 = false;
  }



  if(digitalRead(23)==HIGH && area2 == false)
  {
      area2 = true;
      mySerial.println("AT+CMGF=1");
      delay(500);
      mySerial.println("AT+CMGS=\"+526142183611\"\r");
      delay(500);
      mySerial.print("area 2");
      delay(500);
      //mySerial.println("AT+CMGS=\"+526143841936\"\r");
      //delay(500);
      //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
      //delay(500);
      mySerial.write(26);
  }
  else if(digitalRead(23)==LOW)
  {
    area2 = false;
  }



  if(digitalRead(24)==HIGH && area3 == false)
  {
      area3 = true;
      mySerial.println("AT+CMGF=1");
      delay(500);
      mySerial.println("AT+CMGS=\"+526142183611\"\r");
      delay(500);
      mySerial.print("area 3");
      delay(500);
      //mySerial.println("AT+CMGS=\"+526143841936\"\r");
      //delay(500);
      //mySerial.print("Ya se dejo, manana terminamos todo el shzxczczcxow");
      //delay(500);
      mySerial.write(26);
  }
  else if(digitalRead(24)==LOW)
  {
    area3 = false;
  }
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

































void updateSerial()
{
  delay(500);
  while (Serial.available()) 
  {

    cmd+=(char)Serial.read();
 
    if(cmd!=""){
      cmd.trim();  // Remove added LF in transmit
      if (cmd.equals("S")) {
        sendSMS();
      } else {
        mySerial.print(cmd);
        mySerial.println("");
      }
    }
  }
  
  while(mySerial.available()) 
  {
   // Serial.write(mySerial.read());//Forward what Software Serial received to Serial Port
  }
}

void sendSMS(){
  mySerial.println("AT+CMGF=1");
  delay(500);
  mySerial.println("AT+CMGS=\"+526142183611\"\r");
  delay(500);
  mySerial.print("Hi! TechToTinker!");
  delay(500);
  mySerial.write(26);

  mySerial.println("AT+CMGF=1");
  delay(500);
  mySerial.println("AT+CMGS=\"+526143841936\"\r");
  delay(500);
  mySerial.print("Hi! TechToTinker!");
  delay(500);
  mySerial.write(26);
}
