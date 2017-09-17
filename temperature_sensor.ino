// This sketch uses the LM35 temperature sensor. Originally manufactured by National Semiconductor, acquired by Texas Instruments.
// The LM35 used is specifically the LP Plastic Package 3-Pin TO-92 model.
// The LM35 output voltage has a linear relation with the Celsius remperature, output of 0v when at 0C.
// Every increase of 1C increases the output voltage by 10mv.

const int outputPin = A0;  // Pin attached to LM35 output

unsigned int output = 0;  // Output voltage of LM35
float temp = 0.0;

void setup()
{
  Serial.begin(9600);
  Serial.print("Temperature reported every 2 seconds in degrees Celsius");
  Serial.println();  
}

void loop()
{
  output = analogRead(outputPin);
  temp = (output * 0.0048828125 * 100);  //5/1024=0.0048828125;1000/10=100
  Serial.println(temp);
  delay(2000);  // Wait for 2 seconds
}
