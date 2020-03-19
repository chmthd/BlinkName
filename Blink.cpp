int led1 = D6;
int led2 = D7;

void setup(){
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}
//Morse methods
void dot() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}
void dash() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}

void space() {
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
void loop(){
    // FIRST NAME = CHAMATH
    /* C */dash(); dot(); dash(); dot();
    /* H */dot(); dot(); dot(); dot();
    /* A */dot(); dash();
    /* M */dash(); dash();
    /* A */dot(); dash();
    /* T */dash();
    /* H */dot(); dot(); dot(); dot();
    space();
    //LAST NAME = DABARE
    /* D */dash(); dot(); dash();
    /* A */dot(); dash();
    /* B */dash(); dot(); dot(); dot();
    /* A */dot(); dash();
    /* R */dot(); dash(); dot();
    /* E */dot();

}