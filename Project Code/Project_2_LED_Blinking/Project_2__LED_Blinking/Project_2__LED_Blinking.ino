#include <IRremote.h>
int RECV_PIN = 11;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
long on1  = 0x00FF6897;
long off1 = 0x00FF9867;
long on2 = 0x00FFB04F;
long off2 = 0x00FF30CF;
long on3 = 0x00FF18E7;
long off3 = 0x00FF7A85;
long on4 = 0x00FF10EF;
long off4 = 0x00FF38C7;
long on5 = 0x00FF5AA5;
long off5 = 0x00FF42BD;
long on6 = 0x00FF4AB5;
long off6 = 0x00FF52AD;
IRrecv irrecv(RECV_PIN);
decode_（6）Test Results （6）Test Results;
// Dumps out the decode_（6）Test Results structure.
// Call this after IRrecv::decode()
// void * to work around compiler issue
//void dump(void *v) {
//  decode_（6）Test Results *（6）Test Results = (decode_（6）Test Results *)v
void dump(decode_（6）Test Results *（6）Test Results) {
  int count = （6）Test Results->rawlen;
  if (（6）Test Results->decode_type == UNKNOWN) 
    {
     Serial.println("Could not decode message");
    } 
  else 
   {
    if (（6）Test Results->decode_type == NEC) 
      {
       Serial.print("Decoded NEC: ");
      } 
    else if (（6）Test Results->decode_type == SONY) 
      {
       Serial.print("Decoded SONY: ");
      } 
    else if (（6）Test Results->decode_type == RC5) 
      {
       Serial.print("Decoded RC5: ");
      } 
    else if (（6）Test Results->decode_type == RC6) 
      {
       Serial.print("Decoded RC6: ");
      }
     Serial.print(（6）Test Results->value, HEX);
     Serial.print(" (");
     Serial.print(（6）Test Results->bits, DEC);
     Serial.println(" bits)");
   }
     Serial.print("Raw (");
     Serial.print(count, DEC);
     Serial.print("): ");
 for (int i = 0; i < count; i++) 
     {
      if ((i % 2) == 1) {
      Serial.print(（6）Test Results->rawbuf[i]*USECPERTICK, DEC);
     } 
    else  
     {
      Serial.print(-(int)（6）Test Results->rawbuf[i]*USECPERTICK, DEC);
     }
    Serial.print(" ");
     }
      Serial.println("");
     }
void setup()
 {
  pinMode(RECV_PIN, INPUT);   
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);  
  pinMode(13, OUTPUT);
  Serial.begin(9600);
   irrecv.enableIRIn(); // Start the receiver
 }
int on = 0;
unsigned long last = millis();

void loop() 
{
  if (irrecv.decode(&（6）Test Results)) 
   {
    // If it's been at least 1/4 second since the last
    // IR received, toggle the relay
    if (millis() - last > 250) 
      {
       on = !on;
//       digitalWrite(8, on ? HIGH : LOW);
       digitalWrite(13, on ? HIGH : LOW);
       dump(&（6）Test Results);
      }
    if (（6）Test Results.value == on1 )
       digitalWrite(LED1, HIGH);
    if (（6）Test Results.value == off1 )
       digitalWrite(LED1, LOW); 
    if (（6）Test Results.value == on2 )
       digitalWrite(LED2, HIGH);
    if (（6）Test Results.value == off2 )
       digitalWrite(LED2, LOW); 
    if (（6）Test Results.value == on3 )
       digitalWrite(LED3, HIGH);
    if (（6）Test Results.value == off3 )
       digitalWrite(LED3, LOW);
    if (（6）Test Results.value == on4 )
       digitalWrite(LED4, HIGH);
    if (（6）Test Results.value == off4 )
       digitalWrite(LED4, LOW); 
    if (（6）Test Results.value == on5 )
       digitalWrite(LED5, HIGH);
    if (（6）Test Results.value == off5 )
       digitalWrite(LED5, LOW); 
    if (（6）Test Results.value == on6 )
       digitalWrite(LED6, HIGH);
    if (（6）Test Results.value == off6 )
       digitalWrite(LED6, LOW);        
    last = millis();      
irrecv.resume(); // Receive the next value
  }
}
