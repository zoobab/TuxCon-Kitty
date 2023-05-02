// This displays the name BELLA in morse code
// on the Olimex Kitty badge
// Morse code:
// A .- || B -... || C -.-. || D -.. || E . || F ..-. || G --. ||  H .... || I .. || J .--- ||
// K -.- || L .-.. || M -- || N -. || O --- || P .--. || Q --.- || R .-. || S ... || T - || 
// U ..- || V ...- || W .-- || X -..- || Y -.-- || Z --.. ||
// 1 .---- || 2 ..--- || 3 ...-- || 4 ....- || 5 ..... || 6 -.... || 7 --... || 8 ---.. ||
// 9 ----. || 0 ----- ||
//  -.-.-.-
//, --..--
//: ---...
//; -.-.-.
//. .-.-.-
//" .-..-.
//( -----.
//) .-----
//' -.--.-

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

# short, or blink for half a second
void s()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

# long, or blink for 2 seconds
void l()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void loop()
{
  l(); s(); s(); s(); //B
  delay(2000);
  s(); //E
  delay(2000);
  s(); l(); s(); s(); //L
  delay(2000);
  s(); l(); s(); s(); //L
  delay(2000);
  s(); l(); //A
  delay(10000);
}
