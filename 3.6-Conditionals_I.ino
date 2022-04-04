
int LIGHT=0;
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    LIGHT = analogRead(0);
    Serial.println(LIGHT);
    
    if(LIGHT >= 512) {
    digitalWrite(LED_BUILTIN, HIGH);
    }
    
    else{
    digitalWrite(LED_BUILTIN,LOW);
    }
}
