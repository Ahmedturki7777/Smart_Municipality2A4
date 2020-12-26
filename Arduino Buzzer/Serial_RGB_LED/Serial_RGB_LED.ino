#define red_led 9

void setup()
{
  pinMode(red_led, OUTPUT);
 
  analogWrite(red_led, 255);
 
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()){
    char led_specifier = Serial.read();
    int led_brightness = Serial.parseInt();
    write_leds(led_specifier, led_brightness);
  }
}

void write_leds(char led, int brightness)
{
  if (led == 'r'){
    analogWrite(red_led, 255 - brightness);
    return;
  }
  
  
  return;
}
