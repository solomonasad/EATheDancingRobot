/****************************************
 * Author : Solomon Asad
 * File : Robot Car
 * Desc. : Have a robot that plays music and dances simultaneously.
 ****************************************/
//Speaker Note & Frequencies
#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 493
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

//Include Servo Library
//Motor Initialization
#include <Servo.h>
Servo left, right; //Left and Right Motors

//Speaker Initialization
int delay1;
int pauseBetweenNotes = 0;
int t;
const int PB = 2;
int pressed = 0;

//Motor Wait
const int wait = 1000;
 
void setup()
{
//Serial Monitor
 Serial.begin(9600);
 Serial.println("Hi I'm EA the Dancing Robot");
 delay(1000);
 Serial.println("Would you like to Dance?");
 delay(1000);
 Serial.println("Click the Push Button if Yes");
 waitforPB();
 delay(1000);
 Serial.println("Ok! Ready?");
 delay(500);
 Serial.println("3");
 delay(500);
 Serial.println("2");
 delay(500);
 Serial.println("1");
 delay(500);
//Motor Setup
 left.attach(3);
 right.attach(5);
 left.write(0);
 right.write(0);
//Speaker Setup
 pinMode(8, OUTPUT);
 pinMode(13, OUTPUT);
 pinMode(PB, INPUT);
 t=270;
 Serial.println("To hear my song please press the Push Button");
}
void loop()
{
    waitforPB();
    notars(t/2, NOTE_A4);
    notars(t/2, NOTE_A4);
    notars(t/2, NOTE_A4);
    notars(t/2, NOTE_A4);
    notars(t/2, NOTE_A4);
    notars(t/2, NOTE_A4);
    notars(t/2, NOTE_G4);
    notars(t/2, NOTE_F4);
 
    notars(t/2, NOTE_E4);
    notars(t/2, NOTE_E4);
    notars(t/2, NOTE_F4);
    notars(t/2, NOTE_F4);

    notars(t/2, NOTE_C5);
    notars(t/2, NOTE_C5);
    notars(t/2, NOTE_AS4);
    notars(t/2, NOTE_AS4);

    notars(t/2, NOTE_G4);
    notars(t/2, NOTE_G4);
    notars(t/2, NOTE_F4);
    notars(t/2, NOTE_F4);
    notars(t/2, NOTE_AS4);
    notars(t/2, NOTE_A4);
    notars(t/2, NOTE_F4);
    notars(t/2, NOTE_F4);
    notars(t/2, NOTE_G4);
    notars(t/2, NOTE_G4);

    notars(t/2, NOTE_D5);
    notars(t/2, NOTE_D5);
    notars(t/2, NOTE_D5);
    notars(t/2, NOTE_D5);
    notars(t/2, NOTE_D5);
    notars(t/2, NOTE_D5);

    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_E5);
    notars(t/2, NOTE_E5);
    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_C5);
    notars(t/2, NOTE_C5);
    notars(t/2, NOTE_AS4);
    notars(t/2, NOTE_AS4);
    notars(t/2, NOTE_G5);
    notars(t/2, NOTE_G5);
    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_AS4);
    notars(t/2, NOTE_A5);
    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_F5);
    notars(t/2, NOTE_G5);
    notars(t/2, NOTE_G5);
    Serial.println("If you want to hear my song again press the Push Button");
}
//Duration of the space between notes
void notars(int delay1,int note ){
      tone(13,note ,delay1*0.85);
      pauseBetweenNotes = delay1 * 1;
      delay(pauseBetweenNotes);
      noTone(1);  
}
//
void notars_jai(int delay1,int note ,int Desfase){
       tone(3,note ,delay1*0.9);
       pauseBetweenNotes = delay1 * 1;
       delay(Desfase);
       
       delay(pauseBetweenNotes-Desfase);
       noTone(3);  
}
void waitforPB(){
  while(digitalRead(PB)==0){}
  while(digitalRead(PB)==1){}
}
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Right
    left.write(0);
    right.write(90);
    delay(wait);
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Left
    left.write(90);
    right.write(0);
    delay(wait);
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Left
    left.write(90);
    right.write(0);
    delay(wait);
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Left
    left.write(90);
    right.write(0);
    delay(wait);
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Left
    left.write(90);
    right.write(0);
    delay(wait);
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Right
    left.write(0);
    right.write(90);
    delay(wait);
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Right
    left.write(0);
    right.write(90);
    delay(wait);
    //Straight
    left.write(180);
    right.write(180);
    delay(wait);
    //Turn Right
    left.write(0);
    right.write(90);
    delay(wait);
