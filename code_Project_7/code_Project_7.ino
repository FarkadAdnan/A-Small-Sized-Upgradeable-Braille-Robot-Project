/*
 By:Farkad Adnan
 E-mail: farkad.hpfa95@gmail.com
 inst : farkadadnan
 #farkadadnan , #farkad_adnan , فرقد عدنان#
 FaceBook: كتاب عالم الاردوينو
 inst : arduinobook
 #كتاب_عالم_الاردوينو  #كتاب_عالم_الآردوينو 
 */
 String number1 = "";
String number2 = "";
int operator1 ;
int sign1;
int sign2;
int switchPin53 = 53;
int switchPin52 = 52;
int switchPin51 = 51 ;
int switchPin50 = 50;
int switchPin49 = 49;
int switchPin48 = 48;
int switchPin47 = 47;
int switchPin46 = 46;
int switchPin45 = 45;
int switchPin44 = 44;
int switchPin43 = 43;
int switchPin42 = 42;
int switchPin41 = 41 ;
int switchPin40 = 40;
int switchPin39 = 39;
int switchPin38 = 38;
int switchPin37 = 37;
int switchPin36 = 36;
int switchPin35 = 35;
int butlon53 = 0;
int butlon52 = 0;
int butlon51 = 0;
int butlon50 = 0;
int butlon49 = 0;
in! butlon48 = 0;
in! butlon47 = 0;
in! butlon46 = 0;
in! butlon45 = 0;
in! butlon44 = 0;
in! butlon43 = 0;
in! butlon42 = 0;
in! butlon41 = 0;
in! butlon40 = 0;
in! butlon39 = 0;
in! butlon38 = 0;
in! butlon37 = 0;
in! butlon36 = 0;
in! butlon35 = 0;
boolean las!Butlon53 = LOW;
boolean curren!Butlon53 = LOW;
boolean las!Butlon52 = LOW;
boolean curren!Butlon52 = LOW;
boolean las!Butlon51 = LOW;
boolean curren!Butlon51 = LOW;
boolean las!Butlon50 = LOW;
boolean curren!Butlon50 = LOW;
boolean las!Butlon49 = LOW;
boolean curren!Butlon49 = LOW;
boolean las!Butlon48 = LOW;
boolean curren!Butlon48 = LOW;
boolean las!Butlon47 = LOW;
boolean curren!Butlon47 = LOW;
boolean las!Butlon46 = LOW;
boolean curren!Butlon46 = LOW;
boolean las!Butlon45 = LOW;
boolean curren!Butlon45 = LOW;
boolean las!Butlon44 = LOW;
boolean curren!Butlon44 = LOW;
boolean las!Butlon43 = LOW;
boolean currentButlon43 = LOW;
boolean lastButlon42 = LOW;
boolean currentButlon42 = LOW;
boolean lastButlon41 = LOW;
boolean currentButlon41 = LOW;
boolean lastButlon40 = LOW;
boolean currentButlon40 = LOW;
boolean lastButlon39 = LOW;
boolean currentButlon39 = LOW;
boolean lastButlon38 = LOW;
boolean currentButlon38 = LOW;
boolean lastButlon37 = LOW;
boolean currentButlon37 = LOW;
boolean lastButlon36 = LOW;
boolean currentButlon36 = LOW;
boolean lastButlon35 = LOW;
boolean currentButlon35 = LOW;
/ / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /
void setupO
{
pinMode(switchPin53, INPUT);
pinMode(switchPin52, INPUT);
pinMode(switchPin51, INPUT);
pinMode(switchPin50, INPUT);
pinMode(switchPin49, INPUT);
pinMode(switchPin48, INPUT);
pinMode(switchPin47, INPUT);
pinMode(switchPin46, INPUT);
pinMode(switchPin45, INPUT);
pinMode(switchPin44, INPUT);
pinMode(switchPin43, INPUT);
pinMode(switchPin42, INPUT);
pinMode(switchPin41, INPUT);
pinMode(switchPin40, INPUT);
pinMode(switchPin39, INPUT);
pinMode(switchPin38, INPUT);
pinMode(switchPin37, INPUT);
pinMode(switchPin36, INPUT);
pinMode(switchPin35, INPUT);
Serial. begin(9600);
}
/ / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /
boolean debounce(boolean last, int switch Pin)
{
boolean current = digitaIRead(switchPin);
if (last != current)
{
delay(5);
current = digitaIRead(switchPin);
}
return current;
}
/ / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /
void compiler(int butlon1){
if ((butlon1 == 5311 butlon1 == 49 II butlon1 == 48 II butlon1 == 47 II butlon1 == 45 II
butlon1 == 4411 butlon1 == 43 II butlon1 == 41 II butlon1 == 40 II butlon1 == 39) &&
(operator1 != 50 && operator1 != 46 && operator1 != 42 && operator1 != 38)){
int butlonint = butlonintfinder(butlon1);
number1 = number1 + String(butlonint);
Serial.print(number1 [number1.lengthO-1]); //effectively display braille number on grid
}else if(butlon1 == 50 II butlon1 == 46 II butlon1 == 42 II butlon1 == 38){
/ /Serial. pri nt("operato r");
operator1 = butlon1 ;
//Serial.print(operator1); //effectively display braille number on grid
}else if(butlon1 == 51){
calculatorO;
}else if(operator1 == 37){
calculatorO;
}else if(operator1 == 38){
calculatorO;
}else if(butlon1 == 35){
//CLEAR BUTTON
operator1 = 0;
sign1 = 0;
sign2 = 0;
number1 = "";
number2 = "";
}else l*if(operator1 == 1211 operator1 == 11)*/{
int butlonint = butlonintfinder(butlon1);
I ISerial. pri nt("n02");
number2 = number2 + String(butlonint);
Serial.print(number2[number2.lengthO-1]); Ileffectively display braille number on grid
}
}
I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I II
void calculatorO
{
int number1 int = stringtoint(number1);
IISerial.print("number1 ");
IISerial.print(number1 int);
Ilconsidered <if (number2 != ""»
Ilbut this is going to assume that no errors are made by the user
int number2int = stringtoint(number2);
liSe ria I. print("n um be r2");
liSe ria I. print(n um ber2int);
if (operator1 == 50)
{
int result = int(number1 int) + int(number2int);
Serial.print(result);
I ISerial. pri nt("pl us");
}else if(operator1 == 46)
{
int result = int(number1 int) - int(number2int);
Serial.print(result);
I ISerial. pri nt("mi nus");
}else if(operator1 == 38)
{
int result = int(number1 int) I int(number2int);
Serial.print(result);
}else if(operator1 == 42)
{
int result = int(number1 int) * int(number2int);
Serial.print(result);
}else if(operator1 == 37)
{
}
int result = sqrt(int(number1 int));
Serial.print(result);
else if(operator1 == 36)
{
int result = int(number1 int) * int(number1 int);
Serial.print(result);
}
}
I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I II
int stringtoint(String string number)
{
char intbuf[12]; II make this at least big enough for the whole string
stringnumber.toCharArray(intbuf, sizeof(intbuf));
int intstring = atoi(intbuf);
liSe ria I. print(i ntstri ng);
return intstring;
}
I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I II
int butlonintfinder(int butlon)
{
int butlonint = butlon - 6;
return butlonint;
}
I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I I II
void signfunctionO
{
if (number1 != O){
sign2 = 1;
}else{
sign1 = 1;
}
}
void loopO
{
butlon53 = 0;
butlon52 = 0;
butlon51 = 0;
butlon50 = 0;
butlon49 = 0;
butlon48 = 0;
butlon47 = 0;
butlon46 = 0;
butlon45 = 0;
butlon44 = 0;
butlon43 = 0;
butlon42 = 0;
butlon41 = 0;
butlon40 = 0;
butlon39 = 0;
butlon38 = 0;
butlon37 = 0;
butlon36 = 0;
butlon3S = 0;
Illoop for butlon S3
currentButlonS3 = debounce(lastButlonS3, switchPinS3);
if (lastButlonS3 == LOW && currentButlonS3 == HIGH)
{
compiler(switchPinS3);
Se ria I. print( switch PinS3);
}
lastButlonS3 = currentButlonS3;
Illoop for butlon S2
currentButlonS2 = debounce(lastButlonS2, switchPinS2);
if (lastButlonS2 == LOW && currentButlonS2 == HIGH)
{
compiler(switchPinS2);
Se ria I. print( switch PinS2);
}
lastButlonS2 = currentButlonS2;
Illoop for butlon S1
currentButlonS1 = debounce(lastButlonS1 , switchPinS1);
if (lastButlonS1 == LOW && currentButlonS1 == HIGH)
{
}
compiler(switchPinS1 );
signfunctionO;
Serial.print(switchPinS1 );
lastButlonS1 = currentButlonS1 ;
Illoop for butlon SO
currentButlonSO = debounce(lastButlonSO, switchPinSO);
if (lastButlonSO == LOW && currentButlonSO == HIGH)
{
compiler(switchPinSO);
Se ria I. print( switch PinSO);
}
lastButlonSO = currentButlonSO;
Illoop for butlon 49
currentButlon49 = debounce(lastButlon49, switchPin49);
if (lastButlon49 == LOW && currentButlon49 == HIGH)
{
compiler(switchPin49);
Se ria I. print( switch Pin49);
}
lastButlon49 = currentButlon49;
Illoop for butlon 48
currentButlon48 = debounce(lastButlon48, switchPin48);
if (lastButlon48 == LOW && currentButlon48 == HIGH)
{
compiler(switchPin48);
Se ria I. print( switch Pin48);
}
lastButlon48 = currentButlon48;
Illoop for butlon 47
currentButlon47 = debounce(lastButlon47, switchPin47);
if (lastButlon47 == LOW && currentButlon47 == HIGH)
{
compiler(switchPin47);
Se ria I. print( switch Pin4 7);
}
lastButlon47 = currentButlon47;
Illoop for butlon 46
currentButlon46 = debounce(lastButlon46, switchPin46);
if (lastButlon46 == LOW && currentButlon46 == HIGH)
{
compiler(switchPin46);
Se ria I. print( switch Pin46);
}
lastButlon46 = currentButlon46;
Illoop for butlon 45
currentButlon45 = debounce(lastButlon45, switchPin45);
if (lastButlon45 == LOW && currentButlon45 == HIGH)
{
compiler(switchPin45);
Se ria I. print( switch Pin45);
}
lastButlon45 = currentButlon45;
Illoop for button 44
currentButton44 = debounce(lastButton44, switchPin44);
if (lastButton44 == LOW && currentButton44 == HIGH)
{
compiler(switchPin44);
Se ria I. print( switch Pin44);
}
lastButton44 = currentButton44;
Illoop for button 43
currentButton43 = debounce(lastButton43, switchPin43);
if (lastButton43 == LOW && currentButton43 == HIGH)
{
compiler(switchPin43);
Se ria I. print( switch Pin43);
}
lastButton43 = currentButton43;
Illoop for button 42
currentButton42 = debounce(lastButton42, switchPin42);
if (lastButton42 == LOW && currentButton42 == HIGH)
{
compiler(switchPin42);
Se ria I. print( switch Pin42);
}
lastButton42 = currentButton42;
Illoop for button 41
currentButton41 = debounce(lastButton41, switchPin41);
if (lastButton41 == LOW && currentButton41 == HIGH)
{
compiler(switchPin41 );
Serial.print(switchPin41 );
}
lastButton41 = currentButton41;
Illoop for button 40
currentButton40 = debounce(lastButton40, switchPin40);
if (lastButton40 == LOW && currentButton40 == HIGH)
{
compiler(switchPin40);
Se ria I. print( switch Pin40);
}
lastButton40 = currentButton40;
Illoop for button 39
currentButlon39 = debounce(lastButlon39, switchPin39);
if (lastButlon39 == LOW && currentButlon39 == HIGH)
{
compiler(switchPin39);
Se ria I. print( switch Pin39);
}
lastButlon39 = currentButlon39;
Illoop for butlon 38
currentButlon38 = debounce(lastButlon38, switchPin38);
if (lastButlon38 == LOW && currentButlon38 == HIGH)
{
compiler(switchPin38);
Se ria I. print( switch Pin38);
}
lastButlon38 = currentButlon38;
Illoop for butlon 37
currentButlon37 = debounce(lastButlon37, switchPin37);
if (lastButlon37 == LOW && currentButlon37 == HIGH)
{
compiler(switchPin37);
Se ria I. print( switch Pin37);
}
lastButlon37 = currentButlon37;
Illoop for butlon 36
currentButlon36 = debounce(lastButlon36, switchPin36);
if (lastButlon36 == LOW && currentButlon36 == HIGH)
{
compiler(switchPin36);
Se ria I. print( switch Pin36);
}
lastButlon36 = currentButlon36;
Illoop for butlon 35
currentButlon35 = debounce(lastButlon35, switchPin35);
if (lastButlon35 == LOW && currentButlon35 == HIGH)
{
compiler(switchPin35);
Se ria I. print( switch Pin35);
}
lastButlon35 = currentButlon35;
