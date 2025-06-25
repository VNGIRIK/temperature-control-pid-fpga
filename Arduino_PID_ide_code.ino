const int INPUT_PIN = A0;     // Analog pin for temperature 
const int OUTPUT_PIN = 3;     // PWM pin 

double kp = 0.8;
double ki = 0.20;
double kd = 0.001;

double setpoint = 75.0;
double last_time = 0;
double integral = 0;
double previous = 0;
double output = 0;

void setup() {
  Serial.begin(9600);
  analogWrite(OUTPUT_PIN, 0);
  last_time = millis();

  for (int i = 0; i < 50; i++) {
    Serial.print(setpoint);
    Serial.print(",");
    Serial.println(0);
    delay(100);
  }
  delay(100);
}

void loop() {
  double now = millis();
  double dt = (now - last_time) / 1000.0;
  last_time = now;

  double actual = map(analogRead(INPUT_PIN), 0, 1023, 0, 255);
  double error = setpoint - actual;

  output = computePID(error, dt);
  output = constrain(output, 0, 255);

  analogWrite(OUTPUT_PIN, output);

  Serial.print(setpoint);
  Serial.print(",");
  Serial.println(actual);

  delay(300);
}

double computePID(double error, double dt) {
  double proportional = error;
  integral += error * dt;
  double derivative = (error - previous) / dt;
  previous = error;

  return (kp * proportional) + (ki * integral) + (kd * derivative);
}

