#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

// button layout
char keys[ROWS][COLS] = {
  {'M', '1', '4', '7'},
  {'T', '2', '5', '8'},
  {'A', '3', '6', '9'},
  {'W', 'E', 'C', '0'}
};

// GPIO connections
byte rowPins[ROWS] = {3, 4, 6, 40};
byte colPins[COLS] = {14, 39, 13, 15};

Keypad keypad = Keypad(
  makeKeymap(keys),
  rowPins,
  colPins,
  ROWS,
  COLS
);

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Press a button...");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print("Button pressed: ");
    Serial.println(key);
  }
}